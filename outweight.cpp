#include<iostream>
#include<vector>
using namespace std;
#define ll long long int
void solve(){
    int n; cin>>n;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    ll am=0,bm=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i]) am+=a[i]-b[i];
        else if(b[i]>a[i]) bm+=b[i]-a[i];
    }
    if(am==0){
        cout<<"No"<<endl; return;
    }
    ll amweight=(bm/am)+2;
    vector<ll> ans;
    for(int i=0;i<n;i++){
        if(a[i]<=b[i]) ans.push_back(1);
        else ans.push_back(amweight);
    }
    cout<<"Yes"<<endl;
    for(ll wt:ans) cout<<wt<<" ";
    cout<<endl;


}
int main(){
    
        solve();
        return 0;
}
