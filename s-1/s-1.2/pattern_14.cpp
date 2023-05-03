#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/cpp-program-for-int-to-char-conversion/
void call2pattern(int n){
    for (int i=1; i<=n; i++){  
        for (int j=1; j<=i; j++){
            cout << char(64+j) << " ";  
        }
        cout << "\n";
    }
}

//   int N = 65;
//   char c = N;

int32_t main(){
    
    int n;
    cin >> n;
    
    call2pattern(n);
    return 0;
}