#include<bits/stdc++.h>
using namespace std;

void call2pattern(int n){
    int num=1;
    for (int i=1; i<=n; i++){  
        for (int j=1; j<=i; j++){
            cout << num++ << " ";
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