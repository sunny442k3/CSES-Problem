#include<bits/stdc++.h>
using namespace std;
#pragma GCC target("popcnt") 
#define ll         long long
#define ull        unsigned long long
#define pll        pair<ll, ll>
#define pii        pair<int, int>
#define fi         first 
#define se         second
#define pb         push_back
#define mp         make_pair
#define ALL(v)     v.begin(),v.end()
#define BG(v)      v.begin()
#define EN(v)      v.end()
#define LBV(v,k)   lower_bound(ALL(v), k)
#define UBV(v,k)   upper_bound(ALL(v), k)
 
 
const ll inf     = 1e18;
const int mxx    = 1e6 + 10;
const int mod    = 1e9+7;
const int dx[4]  = {0, 1, 0, -1};
const int dy[4]  = {1, 0, -1, 0};
 
 
 void init_file(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
 
void init_code(){
    ios::sync_with_stdio(0),cin.tie(0);
    init_file();
}
 
 
void solve(){
    ll n;cin>>n;
    vector<ll>f(n+1, inf);
    f[0] = 0;
    for(int i = 1; i <= n; ++i){
        ll k = i;
        while(k){
            ll d = k%10;
            k /= 10;
            f[i] = min(f[i-d] + 1, f[i]);
        }
    }
    cout << f[n] << endl;
}
 
 
int main(){
    init_code();
    ll t = 1;
    // cin >> t;
    for(int i = 1; i <= t; ++i){
        solve();
    }
    return 0;
}