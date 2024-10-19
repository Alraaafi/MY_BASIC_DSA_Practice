#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t,n,m,ans,i,j;

    //freopen("INP.txt", "r", stdin); //Take input From text file. It's Main Part...
    //freopen("OUTP.txt", "w", stdout); //Take ANS in File
/*
    string str;
    getline(cin,str);
    cout<<str<<endl;
    cin.ignore();
*/


/*
    cin>>n>>m;
    ans = __gcd(n,m);
    cout<<ans<<endl;
*/

/*
    double pi = acos(-1);
    cout<<fixed<<setprecision(50)<<pi<<endl;
*/

/*
    vector<int> v;
    v.resize(5);
    v[2] = 55;
    for(auto u : v) cout<<u<< " " ; cout<<endl;
    v.resize(10);
    for(auto u : v) cout<<u<< " " ; cout<<endl;
*/

/*
     vector<int> v = {3,9,34,1,8} ;
     sort( v.begin(), v.end(), greater<int>() ) ;
     for(auto u : v) cout<<u<< " " ; cout<<endl;
*/


/*
     vector<int> v = {3,9,34,1,8} ;
     reverse( v.begin(), v.end() ) ;
     for(auto u : v) cout<<u<< " " ; cout<<endl;

*/


/*
    vector<int> v = {3,9,34,1,8} ;
    v.pop_back(); //O(1)
    cout<<v.back()<<endl; //O(1)
    cout<< *(v.begin()) <<endl; //O(1)
    auto it = v.begin();
    v.erase(it); // O(n)
    for(auto u : v) cout<<u<< " " ; cout<<endl;
*/

/*
    vector<int> v = {8,1,34,1,8} ;
    sort(v.begin(), v.end() ) ;
    int sz = unique( v.begin(), v.end() ) - v.begin() ;
    cout<<"SZ : "<<sz<<endl;
    for(i=0; i<sz; i++) cout<<v[i]<<" "; cout<<endl;
*/

/*
    string str = "123" ;
    bool isP = next_permutation( str.begin(), str.end() );
    isP==1 ? cout<<"Parmutation Exist. ": cout<<"NOT Exist! " ;
    cout<<"that is: "<<str<<endl;

    string s = "1234" ;
    // befor sort
    cout<<"the parmutation of "<<s<<" is : "<<endl;
    i = 1;
    cout<<s<<endl;
    while( next_permutation( s.begin(), s.end() ) )
    {
        cout<<s<<endl;
        i++;
    }
    cout<<"total parmutation is: "<<i<<endl;
*/

/*
    priority_queue<int, vector<int> , greater<int> > p;
    p.push(48);
    p.push(13);
    p.push(200);

    while( !p.empty() )
    {
        cout<< p.top() <<endl;
        p.pop();
    }
*/

    deque<int> d;
    d.push_back(10);
    d.push_front(30);
    d.push_back(99);
    cout<<d.front()<<" "<<d.back()<<endl;
    d.pop_front();
    while(!d.empty())
    {
        cout<<d.front()<<endl;
        d.pop_front();
    }


}

