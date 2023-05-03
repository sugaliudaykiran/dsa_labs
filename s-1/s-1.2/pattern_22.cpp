#include<bits/stdc++.h>
using namespace std;

void call2pattern(int n){   // TC -> O(N^2)..  SC -> O(1)..
    for (int i=0; i<2*n-1; i++){
        for (int j=0; j<2*n-1; j++){
            int top=i, left=j, right=(2*n-2)-j, down=(2*n-2)-i;
            cout << (n-min(min(top,down), min(left,right)));
        }cout <<"\n";
    }
}


int32_t main(){
    int n;
    cin >> n;
    
    call2pattern(n);
    return 0;
}
//https://takeuforward.org/pattern/pattern-22-the-number-pattern/