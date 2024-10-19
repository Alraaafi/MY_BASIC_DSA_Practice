#include<bits/stdc++.h>
using namespace std;
//It is Called Brute-force pattern matching Algorithm

string strCat(string s1, string s2)
{
    return s1+s2;
}

int main()
{
    string s1 ,s2;
    cin>>s1>>s2;

    string s;

    s  = strCat( s1, s2 );
    cout<<"The String Concat is IS: "<<s<<endl;
}
