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
    int n; cin >> n;
		vector<pair<int,int>> p(n);
		vector<int> v(n);
 
		for(int i = 0; i < n; i++) {
			int x, y; cin >> x >> y;
			p[i] = {x,y};
			v[i] = y;
		}
 
		sort(p.begin(), p.end());
		sort(v.begin(), v.end());
 
		ll ans = 0;
		for (int i = 0; i < n; i++) {
			int x = p[i].second;
			int k = lower_bound(v.begin(), v.end(), x) - v.begin();
			ans += k;
			v.erase(v.begin() + k, v.begin() + k + 1);
		}
 
		cout << ans << '\n';

}
love{
    Alamgir
    int t; cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;    
}