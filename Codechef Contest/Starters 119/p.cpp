#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin>>t;
	while(t--){
	    int n,q; cin>>n>>q;
	    string s; cin>>s;
	   // int frq[26]={0};
	    int mx=1;
	    int cnt=1;
	    for(int i=0;i<n-1;i++){
	        if(s[i]==s[i+1]){
	            cnt++;
	            mx=max(mx,cnt);
	        }else{
	            mx=max(mx,cnt);
	            cnt=1;
	        }
	    }
	    int tmp=1;
	    for(int i=n-1;i>0;i--){
	        if(s[i]==s[i-1]) tmp++;
	        else break;
	    }
	    cout<<mx<<" ";
	    while(q--){
	        char c; cin>>c;
	        
	        if(s.back()==c){
	            tmp++;
	            s += c;
	            mx=max(mx,tmp);
	        }else{
	            tmp=1;
	            s += c;
	        }
	        cout<<mx<<" ";
	    }
	    cout<<endl;
	}

}
