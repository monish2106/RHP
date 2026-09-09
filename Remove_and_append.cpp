#include<iostream>
#include<vector>
using namespace std;
void solve(){
    int n,q; cin>>n>>q;
    vector<int> pos(n+1,0);
    for(int p=1;p<=n;p++){
        int curr; cin>>curr;
        pos[curr]=p;
    }
    int nxtpos=n+1;
    while(q--){
        int val; cin>>val;
        pos[val]=nxtpos++;
    }
    vector<pair<int,int>> arr;
    for(int val=1;val<=n;val++){
        arr.push_back(make_pair(pos[val],val));
    }
    sort(arr.begin(), arr.end());
    for(auto[pos,val]:arr){
        cout<<val<<endl;
    }
    cout<<endl;
}
int main(){
        solve();
        return 0;
}
