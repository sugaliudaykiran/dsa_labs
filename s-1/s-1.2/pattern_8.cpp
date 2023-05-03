#include<bits/stdc++.h>
using namespace std;

void call2patter(int n){  // TC -> O(N^2)..  SC -> O(1)..
    for (int i=n; i>0; i--){
        for (int j=0; j<n-i; j++){
            cout <<" ";
        }
        for (int j=0; j<2*i-1; j++){
            cout <<"*";
        }
        for (int j=0; j<n-i; j++){
            cout <<" ";
        }cout << "\n";
    }
}

int32_t main(){
    int n;
    cin >> n;
    
    call2patter(n);
    return 0;
}

// ==============================================

void call2patter(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++){
            cout <<" ";
        }
        for (int j=0; j<(2*n)-(2*i+1); j++){
            cout <<"*";
        }
        for (int j=0; j<i; j++){
            cout <<" ";
        }cout << "\n";
    }
}