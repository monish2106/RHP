#include<bits/stdc++.h>
using namespace std;
int hcf(int a,int b){
    return (b==0)?a:hcf(b,a%b);
}
void solve(){
    int x;cin>>x;
    while(x--){
        int n; cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<hcf(arr[0],arr[n-1])<<endl;
    }
    
}
int main(){
    solve();
    return 0;
}
