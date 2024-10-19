#include<bits/stdc++.h>
using namespace std;
//It is Called Brute-force pattern matching Algorithm


char DeStr(string s, int in)
{

    return s[in];
}

int main()
{
    string str , ns;
    int in,sz;

    cout<<"What is The Main String: ";
    cin>>str;

    cout<<"What is The index to add in String: ";
    cin>>in;



    char res = DeStr(str, in);

    cout<<"The Result String IS : "<<res<<endl;

}
