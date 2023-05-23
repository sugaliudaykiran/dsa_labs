#include<bits/stdc++.h>
using namespace std;

// insertion sort
void fun(int n, int *ar){
    for (int i=1;i<n; i++){  // TC -> O(N^2).. SC -> O(1)
        for (int j=i-1; j>=0;j--){
            if (ar[j]<ar[i]){
                continue;
            }
            if (ar[j]>ar[i]){
                swap(ar[j], ar[i]);
                i=j;
            }
        }
    }
    for (int i=0; i<n; i++){
        cout << ar[i] << " ";
    }cout << "\n";
}


int32_t main(){
    
    int n;
    cin >> n;
    
    int ar[n];
    for (auto &i: ar){
        cin >> i;
    }
    fun(n, ar);
    return 0;
}