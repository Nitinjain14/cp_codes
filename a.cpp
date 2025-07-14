#include<bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>> a[i];
    }


    for(int i=0;i<n-1;i++){
        if(abs(a[i]-a[i+1]) <= 1) {
            cout<<0<<endl;
            return;
        }
    }
    for (int i = 1; i + 1 < n; i++) {
		if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
			cout << 1 << endl;
			return;
		}
		if (a[i - 1] > a[i] && a[i] < a[i + 1]) {
			cout << 1 << endl;
			return;
		}
	}
	cout << -1 << endl;
}
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    #ifndef ONLINE_JUDGE
        freopen("./outputs/input.txt", "r", stdin);
        freopen("./outputs/output.txt", "w", stdout);
    #endif
 
    int t; cin>>t;while(t--)
    solve();
 
    return 0;
}
 
// Explanation 
/*
 
*/
