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
const int N=1e6+2;
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
vii a;
bool cheak(int x){
    int cnt=0;
    while(x != 0){
        if(x%10 != 0) cnt++;
        x/=10;
    }
    return x==1;
}
void solve(){
    int n; cin>>n;
    int ans=0;
    int i=0;
    while(a[i]<=n){
        ans++;
        i++;
    }
    out(ans)
}
void sett(){
    for(int i=1;i<=N;i++){
        if(cheak(i)){
            a.push_back(i);
        }
    }
}
love{
    Alamgir
    // int cnt=0;
    sett();
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}