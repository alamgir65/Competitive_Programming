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
    int n,k,q; cin>>n>>k>>q;
    vii a(k),b(k);
    for(int i=0;i<k;i++) cin>>a[i];
    for(int i=0;i<k;i++) cin>>b[i];
    vii ans;
    while(q--){
        double d; cin>>d;
        if(d==0.00){
            ans.pb(0);
            continue;
        }
        int x=0;
        for(int i=0;i<k;i++){
            if(d==a[i]){
                x=b[i];
                co
            }
            if(d<a[i] && i==0){
                double tmp=(b[0]*1.00)/(a[0]*1.00);
                double mul=d*tmp;
                x=(int)(mul);
                break;
            }
            if(d < a[i]){
                double tm=a[i]-a[i-1], div=b[i]-b[i-1];
                double tmp=(div*1.00)/(tm*1.00);
                double mul=(d-a[i-1])*tmp;
                x=(int)(mul);
                x += b[i-1];
                break;
            }
        }
        ans.pb(x);
    }
    for(auto val:ans) cout<<val<<" ";
    cout<<endl;
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
