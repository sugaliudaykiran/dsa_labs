#include<bits/stdc++.h>
using namespace std;

void call2pattern(int n){
    for (int i=0; i<n; i++){   // TC -> O(N^2)..  SC -> O(1)..
        for (int j=0; j<n; j++){
            if (i==0||j==0||i==n-1||j==n-1){
                cout << "*";
            }else{
                cout << " ";
            }
        }cout << "\n";
    }
}


int32_t main(){
    int n;
    cin >> n;
    
    call2pattern(n);
    return 0;
}