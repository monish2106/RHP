#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int

void solve(){
    int n;cin>>n;
    vector<pair<int,int>> arr(n);
    int mini=2e9;
    ll base = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
        mini=min(mini,arr[i].first);
        base += arr[i].first;
    }
    sort(arr.begin(),arr.end(),[](const pair<int,int>& a,const pair<int,int>& b){
        return a.first-a.second > b.first - b.second;
    });
    ll ans = base;
    for(int i=1;i<n;i++){
        base -= arr[i-1].first;
        base += arr[i-1].second;
        ll curr=base+((n-i)>=i?0:1LL*mini*(i-(n-i)));
        ans = min(ans,curr);
    }
    cout<<ans<<endl;

}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
