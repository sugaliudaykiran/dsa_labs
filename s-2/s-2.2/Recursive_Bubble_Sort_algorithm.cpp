#include<bits/stdc++.h>
using namespace std;

void sortb(int *ar, int n){
    if (n==1){             // TC -> O(N^2)  SC -> O(N)
        return;
    }
    for (int i=0; i<n-1; i++){
        if (ar[i]>ar[i+1])
           swap(ar[i], ar[i+1]);
    }
    sortb(ar, n-1);
}

void sortb2(int *ar, int n){
    if(n==1){
        return;
    }
    bool swapHappend =false;
    for(int i=0; i<n-1; i++){
        if (ar[i]>ar[i+1])
           swap(ar[i], ar[i+1]);
           swapHappend = true;
    }if(swapHappend == false){
        return;
    }
    sortb2(ar, n-1);
}


int32_t main(){
    
    int n;
    cin >> n;
    int ar[n];
    for (auto &i: ar){
        cin >> i;
    }
    
    sortb(ar, n);
    for (auto &x: ar){
        cout << x << " ";
    }cout << "\n";
    return 0;
}