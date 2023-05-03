#include<bits/stdc++.h>
using namespace std;

void f1(int i, int n){  // backtracing..
    if (i==0){
        return;
    }
    f1(i-1, n);
    cout << i << " ";
}

void f2(int i, int n){
    if (i>n){
        return;
    }
    f2(i+1, n);
    cout << i << " ";
}

int32_t main(){
    int n;
    cin >> n;
    
    f1(n, n);
    cout << "\n";
    f2(1,n);
    
    return 0;
}