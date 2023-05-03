#include<bits/stdc++.h>
using namespace std;

void call2pattern(int n){
    for (int i=1; i<=n; i++){  // In the problem is hard, then think a way to divided, the tasks to completely it.
        for (int j=1; j<=i; j++){  // doing the left half
            cout << j; 
        }
        for (int j=1; j<=(2*n)-(2*i); j++){ // doing space in the both halves..
            cout << " ";
        }
        for (int j=i; j>=1; j--){ // doing the remaining right half
            cout << j;
        }cout << "\n";
    }
}

int32_t main(){
    
    int n;
    cin >> n;
    
    call2pattern(n);
    return 0;
}