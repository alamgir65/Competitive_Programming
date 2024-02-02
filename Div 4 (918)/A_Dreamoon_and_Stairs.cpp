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
    int n,m; cin>>n>>m;
    if(n<m){
        out(-1)
        return;
    }
    else if(n==m){
        out(n)
        return;
    }
    int mid=n/2 + n%2;
    if(mid%m==0){
        out(mid)
        return;
    }
    while(mid<=n){
        mid++;
        if(mid%m==0){
            cout<<mid<<endl;
            return;
        }
    }
}
love{
    Alamgir
    solve();
    return 0;    
}