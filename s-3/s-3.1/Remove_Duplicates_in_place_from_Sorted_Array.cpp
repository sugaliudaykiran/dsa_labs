#include<bits/stdc++.h>
using namespace std;

int funUsingHashTable(int *ar, int n){
    set <int>s; // TC -> O(N*logN) + O(N) => O(NlogN).. 
    for (int i=0;i<n;i++){// SC -> O(N)
        s.insert(ar[i]);
    }int i=0;
    for (auto &x :s){
        ar[i++]=x;
    }
    return i;
}

int fun2(int *ar, int n){
    int i=0;  // Comparing the ar [i_th] index with  ar[j_th] index change the values & count.
    for (int j=i+1;j<n;j++){ // TC -> O(N).. SC -> O(1)..
        if (ar[i] != ar[j]){ 
            i=i+1;
            ar[i]=ar[j];
        }       
    }return i+1;
}

int32_t main(){
    
    int n;
    cin >> n;
    
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }
    
    // cout << funUsingHashTable(ar,n) << "\n";
    cout << fun2(ar,n) << "\n";
    return 0;
}