#include<bits/stdc++.h>
using namespace std;
//It is Called Brute-force pattern matching Algorithm

int subStr(string str, string sub )
{
    int i,j,n,m;
    n = str.size();
    m = sub.size();

    if(n<m) return -1;

    for(i=0; i<n-m+1; i++)
    {
        for( j=0; j<m; j++ )
        {
            if( str[i+j] != sub[j] )
                break;
        }

        if( j==m )
            return  i+1;
    }

    return -1;
}

int main()
{
    string str,sub;
    cin>>str;
    cin>>sub;

    int in = -1;

    in  = subStr( str, sub );

    if(in==-1)
        cout<<"NOT SUBSTRING EXIST!"<<endl;
    else
        cout<<"INDEX: "<<in<<" have a Substring."<<endl;
}
