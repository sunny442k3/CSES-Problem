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
    ll sum = n*(n+1)/2;
    if(sum%2 != 0){
        cout << 0 << endl;
        return;
    }
    sum /= 2;
    vector<vector<ll>>f(n+1, vector<ll>(sum+1, 0));
    f[0][0] = 1;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= sum; ++j){
            f[i][j] = f[i-1][j];
            if(j >= i){
                f[i][j] += f[i-1][j-i];
                f[i][j] %= mod; 
            }
        }
    }
    cout << f[n][sum] << endl;
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