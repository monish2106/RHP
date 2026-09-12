#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    string s,t; cin>>s>>t;
    string dt=t+t;
    cout<<(dt.contains(s)?"Yes":"No")<<endl;
}
int main(){
    solve();
    return 0;
}
