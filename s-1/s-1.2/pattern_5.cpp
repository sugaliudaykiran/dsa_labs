#include<bits/stdc++.h>
using namespace std;

void call2pattern(int n){  // TC -> O(N^2)..  SC -> O(1)..
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i; j++){
            cout << "* " <<" ";
        }cout << "\n";
    }
}


int32_t main(){
    int n;
    cin >> n;
    
    call2pattern(n);
    return 0;
}

// =============================================

void call2pattern(int n){
    for (int i=0; i<n; i++){
        for (int j=n; j>i; j--){
            cout << "* " <<" ";
        }cout << "\n";
    }
}