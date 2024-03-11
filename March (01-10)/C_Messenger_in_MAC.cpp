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
    ll n,l; cin>>n>>l;
    vector<pii> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].second;
        cin>>v[i].first;
    }
    sort(all(v));
    int ans=0;
    for(int i=0;i<n;i++){
        priority_queue<int> pq;
        ll sum=0;
        for(int j=i;j<n;j++){
            sum += v[j].second;
            pq.push(v[j].second);

            while(!pq.empty() && sum + v[j].first - v[i].first > l){
                sum -= pq.top();
                pq.pop();
            }
            ans = max(ans, int(pq.size()));
        }
    }

    cout << ans << endl;
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