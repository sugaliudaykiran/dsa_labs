#include<bits/stdc++.h>
using namespace std;

void call2pattern(int n){
    for (int i=0; i<n; i++){
        for (int j=n-i; j>=1; j--){
            cout << "*";
        }for (int j=0; j<2*i; j++){
            cout << " "; 
        }for (int j=n-i; j>=1; j--){
            cout << "*";
        }
        cout << "\n";
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << "*";
        }for (int j=0; j<(2*n)-(2*i); j++){
            cout << " "; 
        }for (int j=1; j<=i; j++){
            cout << "*";
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

