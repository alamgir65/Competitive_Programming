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
ll powr(ll x,ll i){
    while(i--){
        x *= 2;
    }
    return x;

}
void solve(){
    int n; cin>>n;
    int j=0;
    for(int i=32;i>=1;i--){
        ll x=5 * (powr(2,i));
        if(x <= n){
            ll tmp=n-x;
            j=n%(powr(2,i));
            break;
        }
    }
    if(j==0) cout<<"Sheldon";
    else if(j==1) cout<<"Leonard";
    else if(j==2) cout<<"Penny";
    else if(j==3) cout<<"Rajesh";
    else cout<<"Howard";
}
love{
    Alamgir
    int t=1;
    // cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}