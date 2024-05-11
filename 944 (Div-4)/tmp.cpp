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
    string s,t; cin>>s;
    reverse(all(t));
    if(s==t){
        out(1)
        return;
    }
    int cnt=0;
    int ans=1;
    bool flag=false;
    if(s[0]=='1') flag=1;
    int n=s.size();
    for(int i=1;i<n;i++){
        if(s[i]=='1') flag=1;
        if(flag && s[i]=='0' && cnt==0) cnt=1;
        if(flag && s[i-1]=='0' && s[i]==0){
            cnt++;
        }else{
            if(flag && cnt>0) ans++;
            cnt=0;
        }
    }
    if(cnt>0 && flag) ans++;
    out(ans)
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
