/*#include<iostream>

using namespace std;

int main(){

    int tc;cin>>tc;

    while(tc--){
        int n;cin>>n;
        int count=0;
        for(int i=1;i<=n;i++){
 
            int flag=0;
            string temp = to_string(i);
            int l =0;int r=temp.length() -1;
            while(l<r){
                if(temp[l] != temp[r]){
                    flag = 1;
                    break;
                }
                l++;
                r--;
            }

        //    int temp = i;
            /*int flag=0;
            int prev = temp%10;
            while(temp>0){
                int a =temp%10;
                if(a != prev){
                    flag=1;
                    break;
                }
                temp=temp/10;
                prev=a;
            }
            if(!flag){
                count++;
            }



        }
        cout<<count<<endl;

    }


    return 0;
}*/


#include<bits/stdc++.h>
using namespace std ;

#define ll              long long 
#define pb              push_back
#define all(v)          v.begin(),v.end()
#define sz(a)           (ll)a.size()
#define F               first
#define S               second
#define INF             2000000000000000000
#define popcount(x)     __builtin_popcountll(x)
#define pll             pair<ll,ll> 
#define pii             pair<int,int>
#define ld              long double

const int M = 1000000007;
const int MM = 998244353;
const long double PI = acos(-1);

template<typename T, typename U> static inline void amin(T &x, U y){ if(y<x) x=y; }
template<typename T, typename U> static inline void amax(T &x, U y){ if(x<y) x=y; }
template<typename T, typename U> ostream& operator<<(ostream &os, const pair<T, U> &p)
{ 
    return os<<'('<<p.F<< ","<<p.S<<')'; 
}

int _runtimeTerror_()
{
    ll n;
    cin>>n;
    int ans = 0;
    for(int i=1;i<=9;++i)
    {
        ll num = 0;
        for(int j=1;j<=10;++j)
        {
            num = num * 10 + i;
            if(num <= n)
            {
                ++ans;
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifdef runSieve
        sieve();
    #endif
    #ifdef NCR
        initialize();
    #endif
    int TESTS=1;
    cin>>TESTS;
    while(TESTS--)
        _runtimeTerror_();
    return 0;
}