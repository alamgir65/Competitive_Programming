#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define cyes cout<<"Yes"<<endl;
#define cno cout<<"No"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define love int main()
#define vtr vector
#define pii pair<int,int>
#define out(x) cout << x << '\n';
#define out2(x,y) cout << x << " " << y << '\n';
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
void solve(){
    ll n; cin>>n;
    ll a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll even=0,odd=0;
    bool ok=false;
    unordered_map<ll,ll> mp;
    for(ll i=1;i<=n;i++){
        if(i%2 != 0) odd+=a[i];
        else even += a[i];
        ll diff=odd-even;
        if(diff == 0 || mp.find(diff) != mp.end()){
            ok=true;
            break;
        }
        mp[diff]=i;
    }
    if(ok) yes
    else no
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}