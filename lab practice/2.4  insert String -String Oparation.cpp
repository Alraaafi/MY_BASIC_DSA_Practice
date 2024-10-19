#include<bits/stdc++.h>
using namespace std;
//It is Called Brute-force pattern matching Algorithm


string inStr(string s, int in, string ns)
{
    string r = "";
    for(int i=0; i<in; i++)
    r+=s[i];

    r+=ns;

    for(int i=in; i<s.size(); i++)
    r+=s[i];

    return r;
}

int main()
{
    string str , ns, res;
    int in;

    cout<<"What is The Main String: ";
    cin>>str;

    cout<<"What is The index to add in String: ";
    cin>>in;

    cout<<"What is new String: ";
    cin>>ns;

    res = inStr(str, in, ns);

    cout<<"The Result String IS : "<<res<<endl;

}
