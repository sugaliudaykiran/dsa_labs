#include<bits/stdc++.h>
using namespace std;

void f1(int n, int res){
    if (n < 1){  // TC -> O(N)..   SC -> O(N)..
        cout << res;
        return;
    }
    f1(n-1, res+n);
}

void f4(int n){
    int res=0;  // TC -> O(N)..   SC -> O(N)..
    for (int i=1; i<=n; i++){
        res+=i;
    }
    cout << res;
}

void f2(int n){
    cout << n * (n+1)/2;  // TC -> O(1).. SC -> O(1)..
}

int f3(int n){
    if (n == 1){
        return n;    // TC -> O(N).. SC -> O(N)..
    }
    return n + f3(n-1);
}

int32_t main(){
    int n, res=0;
    cin >> n;
    
    f1(n, res);
    cout << "\n";
    f2(n);
    cout << "\n";
    cout << f3(n) << "\n";
    f4(n);
    return 0;
}