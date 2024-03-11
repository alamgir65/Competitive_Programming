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
    vll a(n);
    unordered_map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=1;
    }
    ll mex=0;
    for(ll i=0;i<10e5+2;i++){
        if(mp[i]==0){
            mex=i;
            break;
        }
    }

    if(mex == 0){
        cout << 2 << '\n';
        cout << 1 <<" "<<1<<'\n'<<2<<" "<<n<<'\n';
        return;
    }
    mp.clear();
    int left = 0;
    vector<pii> ans;

    for(int i=0;i<n;i++){
        if(a[i] < mex){
            mp[a[i]]=1;
        }

        if(mp.size() == mex){
            ans.pb({left+1,i+1});
            left = i+1;
            mp.clear();
        }
    }
    if(ans.size() < 2){
        out(-1)
        return;
    }
    cout << (ans.size()) <<'\n';
    ans[ans.size()-1].second=n;
    for(auto u:ans){
        cout<<u.first<<' '<<u.second<<'\n';
    }
}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}