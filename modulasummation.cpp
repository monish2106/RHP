#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define ll long long int
void solve(){
    int n; cin>>n;
    int sum;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        sum+=(a-1);
    }
    cout<<sum<<endl;
}
int main(){
    solve();
    return 0;
}
