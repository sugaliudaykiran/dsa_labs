#include<bits/stdc++.h>
using namespace std;

void passByValue(int x){
    x += 1;
}
void passByReference(int &x){
    x += 1;
}

int32_t main(){
    int x;
    cin >> x;
    cout << "value of x, before the func call: " << x << "\n";
    // passByValue(x);
    passByReference(x);
    cout << "value of x, after the func call: "<< x << "\n";
    return 0;
}