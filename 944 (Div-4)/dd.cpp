#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
using namespace std;

void solve(){
    int n,k,q; cin>>n>>k>>q;
    map<int,int> mp;
    vector<int> a(k),b(k);
    for(int i=0;i<k;i++) cin>>a[i];
    for(int i=0;i<k;i++) cin>>b[i];
    for(int i=0;i<k;i++) mp[a[i]]=b[i];
    vector<int> ans;
    while(q--){
        int d; cin>>d;
        if(d==0){
            ans.push_back(0);
            continue;
        }
        if(mp.find(d) != mp.end()){
            ans.push_back(mp[d]);
            continue;
        }
        if(d<a[0]){
            double tmp=(b[0]*1.00)/(a[0]*1.00);
            double mul=(d)*tmp;
            int x=(int)(mul);
            ans.push_back(x);
            continue;
        }
        auto tm=lower_bound(a.begin(),a.end(),d);

        //auto div=lower_bound(b.begin(),b.end(),tm);
        if(tm != a.begin()) tm--;
        int i=distance(a.begin(),tm);
        int tmp=a[i]-a[i-1],divv=b[i]-b[i-1];
        double tmpp=(divv*1.00)/(tmp*1.00);
        double mul=(d*1.00)*tmpp;
        int x=(int)(mul);
        x += b[i-1];
        ans.push_back(x);

    }
    for(auto val:ans) cout<<val<<" ";
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
    }
    return 0;
}
