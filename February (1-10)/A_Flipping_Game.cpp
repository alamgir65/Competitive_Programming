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
    vii a(n);
    int zero=0;
    int one=0;
    int pre[n];
    int pre2[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) one++;
        if(a[i]==0){
            zero++;
        }
        pre[i]=zero;
        pre2[i]=one;
    }
    if(one==n){
        out(n-1)
        return;
    }
    
    int i=0,j=n-1;
    int mx=one;
    while(i<=j){
        if(a[i]==0 && a[i]==a[j]){
            int tmp,tmp2;
            if(i==0){
                tmp=pre[j];
                tmp2=pre2[j];
            }else{
                tmp=pre[j]-pre[i-1];
                tmp2=pre2[j]-pre2[i-1];
            }
            int d=tmp-tmp2;
            if(d > 0){
                mx=max(d+one,mx);
            }
            i++;
            j--;
        }else if(a[i]==0) j--;
        else if(a[j]==0) i++;
        else{
            i++;
            j--;
        }
    }
    out(mx)



    // out(one+mx)

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