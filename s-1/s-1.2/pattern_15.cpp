#include<bits/stdc++.h>
using namespace std;

void call2pattern(int n){
    for (int i=n; i>=1; i--){  
        for (int j=1; j<=i; j++){
            cout << char(64+j) << " ";
        }
        cout << "\n";
    }
}

int32_t main(){
    
    int n;
    cin >> n;
    
    call2pattern(n);
    return 0;
}