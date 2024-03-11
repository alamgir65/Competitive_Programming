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
#define dqii deque<int> 
#define dqll deque<ll> 
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve(){
    int n; cin>>n;
    map<int,int> mp;
    mp[0]=0;
    mp[1]=1;
    mp[2]=2;
    mp[3]=1;
    mp[4]=2;
    mp[5]=3;
    mp[6]=1;
    mp[7]=2;
    mp[8]=3;
    mp[9]=2;
    mp[10]=1;
    mp[11]=2;
    mp[12]=2;
    mp[13]=2;
    mp[14]=3;
    ll fif = n/15;
    n%=15;
    if(fif == 0){
        out(mp[n])
    }else{
        ll ans=fif+mp[n];
        if(n>=5){
            ans = min((fif+mp[n]),(fif+1+mp[n-5]));
        }
        out(ans)
    }
}
love{
    Alamgir
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}