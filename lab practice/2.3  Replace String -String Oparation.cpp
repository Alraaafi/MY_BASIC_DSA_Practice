#include<bits/stdc++.h>
using namespace std;
//It is Called Brute-force pattern matching Algorithm

int sub(string str, string sub )
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

string StrRep(string s, string r, string ns)
{
    int i,j,in = sub(s, r);
    string fs="";

    for(i=0; i<in-1; i++)
    {
        fs = fs+s[i];
    }

    fs = fs+ns;


    for(i= in+r.size()-1; i<s.size(); i++ )
        fs = fs+s[i];

    return fs;
}

int main()
{
    string str ,rep, ns, res;

    cout<<"What is The Main String: ";
    cin>>str;

    cout<<"What is The replace String: ";
    cin>>rep;

    cout<<"What is new String: ";
    cin>>ns;

    res = StrRep(str, rep, ns);

    cout<<"The Result String IS : "<<res<<endl;

}
