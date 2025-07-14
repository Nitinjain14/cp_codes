#!/bin/bash
 
echo "Please enter the name of the Cpp file (without extension):"
 
name="a.cpp"
 
# Create the outputs directory if it doesn't exist
mkdir -p outputs
 
# Create the C++ file if it doesn't exist
if [ -f "$name" ]; then 
    echo "File already exists!"
else
    cat <<EOL > "$name"
#include<bits/stdc++.h>
 
using namespace std;
 
void solve(){
 
}
 
int main(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    #ifndef ONLINE_JUDGE
        freopen("./outputs/input.txt", "r", stdin);
        freopen("./outputs/output.txt", "w", stdout);
    #endif
 
    // int t; cin>>t;while(t--)
    // solve();
 
    return 0;
}
 
// Explanation 
/*
 
*/
EOL
fi
 
# Create input and output text files
touch outputs/input.txt
touch outputs/output.txt
 
# Open the C++ file in VS Code
code ./"$name"