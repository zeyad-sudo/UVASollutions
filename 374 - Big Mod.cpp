#include <bits/stdc++.h>
#define ll long long
#define  el '\n'
#define all(v) v.begin(),v.end()
#define ff first
#define ss second
#define sz(v) v.size()
using namespace std;
#define MAX 200001
#define infinity (long long)1e18
ll powermod(ll base,ll exp,ll m){
    ll res=1;
    while(exp){
          if(exp%2==1) 
            res=((res%m)*(base%m))%m;
       base=((base%m)*(base%m))%m;
       exp/=2;
    }
    return res;
}
int main()
{
    // freopen("binary.in", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     ll b,p,m;
     char ch;
     while (cin>>b>>p>>m){
        cout<<powermod(b,p,m)<<el;
     }
}
