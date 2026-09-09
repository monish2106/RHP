#include<iostream>
using namespace std;
void solve(){
    int n; cin>>n;
    int st=1,end=10;
    for(int ctr=1;ctr<n;ctr++){
        int curr; cin>>curr;
        if(!(curr>=st && curr<=end)){
            cout<<"No"<<endl; return;
        }
        if(ctr%10==0){
            st+=10; end+=10;
        }
    }
    cout<<"Yes"<<endl;
}
int main(){
    solve();
    return 0;
}
