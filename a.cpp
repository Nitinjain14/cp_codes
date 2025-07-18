#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int k,n,w;
    cin>>k>>n>>w;
    int x=w*(w+1);

    cout<<abs(((x/2)*k)-n);
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
