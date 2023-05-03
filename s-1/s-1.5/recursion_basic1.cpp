#include<bits/stdc++.h>
using namespace std;

void print_val_upto_0(int &n){
    if (n==0){
        return;
    }
    cout << n << " ";
    n--;
    print_val_upto_0(n);
}
void print_val_upto_10(int &n){
    if (n==10){
        return;
    }
    cout << n << " ";
    n++;
    print_val_upto_10(n);
}

int32_t main(){
    
    int n;
    cin >> n;
    
    print_val_upto_10(n);
    cout << "\n";
    print_val_upto_0(n);
    return 0;
} 