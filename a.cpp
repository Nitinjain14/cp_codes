#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k;
    cin>>n>>k;

    while(n>0 && n%10<k){
        if(n%10!=0 && n%10<k){
            k-=(n%10);
            n-=(n%10);
        }
        else if(n%10==0){
            n=n/10;
            k-=1;
        }
    }
    if(n%10>=k){
        cout<<n-k;
    }
}
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    #ifndef ONLINE_JUDGE
        freopen("./outputs/input.txt", "r", stdin);
        freopen("./outputs/output.txt", "w", stdout);
    #endif
 
    //int t; cin>>t;while(t--)
    solve();
 
    return 0;
}
 
// Explanation 
/*
 
*/
