#include <bits/stdc++.h>
#include <map>
using namespace std;
// Code Written By: Md. Tanvir Ahemed (Alraaafi) -CSE4th BSFMSTU
// Codeforces Profile: https://codeforces.com/profile/Alraaafi
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long int t,n,i,j,x,q,p,m,k;

    cin>>t;

    while(t--)
    {
        cin>>n>>k;

        long long int arr[n],s=0,seg=0,max=0,first,flag=0;

        for (i = 0; i < n; ++i)
        {
            cin>>arr[i];
            s=s+arr[i];
        }

        for (i = 0; i < n; ++i)
        {
            if(arr[i]>0) flag=1;

            if(flag==1)
            {
                seg = seg + arr[i];
                if(seg>max) max = seg;
                if(seg<0) {
                    flag=0;
                    seg=0;
                }
            }
        }

        s = s - max;

        for (i = 1; i <= k; ++i)
        {
            max = (2*max)%1000000007;
        }
        //cout<<max<<endl;

        s = s + max;

        if(s<0)
            cout<<1000000007 - abs((s)%1000000007)<<"\n";
        else
            cout<<(s)%1000000007<<"\n";

    }


}
