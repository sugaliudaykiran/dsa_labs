#include<bits/stdc++.h>
using namespace std;

// functional way
int fact(int n){
    if (n==1){   // TC -> O(N).. SC -> O(N)..
        return 1;
    }
    return n*fact(n-1);
}

void fact2(int i, int res){
    if (i<1){
        cout << res;   // TC -> O(N).. SC -> O(N)..
        return;
    }
    fact2(i-1, res*i)
}

int32_t main(){
    // factorial of N
    int n;
    cin >> n;
    
    cout << fact(n);
    cout << "\n";
    fact2(n, 1);
}