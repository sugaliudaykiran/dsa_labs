#include<bits/stdc++.h>
using namespace std;

void call2pattern(int n){
    for (int i=0; i<n; i++){   // TC -> O(N^2)..  SC -> O(1)..
        for (int j=0; j<=i; j++){
            cout << j+1 <<" ";
        }cout << "\n";
    }
}


int32_t main(){
    int n;
    cin >> n;
    
    call2pattern(n);
    return 0;
}

// =====================

void call2pattern(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << j <<" ";
        }cout << "\n";
    }
}