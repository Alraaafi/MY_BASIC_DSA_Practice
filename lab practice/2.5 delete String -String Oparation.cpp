#include<bits/stdc++.h>
using namespace std;
//It is Called Brute-force pattern matching Algorithm


string DeStr(string s, int in, int sz)
{
    string r = "";
    for(int i=0; i<in; i++)
    r+=s[i];


    for(int i=in+sz; i<s.size(); i++)
    r+=s[i];

    return r;
}

int main()
{
    string str , ns, res;
    int in,sz;

    cout<<"What is The Main String: ";
    cin>>str;

    cout<<"What is The index to add in String: ";
    cin>>in;

    cout<<"What num of element delete to String: ";
    cin>>sz;

    res = DeStr(str, in, sz);

    cout<<"The Result String IS : "<<res<<endl;

}
