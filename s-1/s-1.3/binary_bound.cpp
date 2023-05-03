#include<bits/stdc++.h>
using namespace std;

void exploring_binary_bound(){

    int ar[] = {1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n = sizeof(ar)/sizeof(ar[0]);
    int x;
    cin >> x;
    
    bool exist = binary_search(ar, ar+n, x);

    // first occurrence of x in sorted array.
    int index = lower_bound(ar, ar+n, x) - ar;
    if (index < n && ar[index] == x ){
        cout << index;
    }else{
        cout << -1;
    }cout << "\n";
    
    
    // last occurrence of x in sorted array.
    int idx = upper_bound(ar, ar+n, x) - ar;
    idx--;
    if (idx >= 0 && idx < n && ar[idx]==x ){
        cout << idx;
    }else{
        cout << -1;
    }cout << "\n";
    
    // largest number smaller than x in the sorted array.
    index = lower_bound(ar, ar+n, x) - ar;
    index--;
    if (index>=0){
        cout << ar[index];
    }else{
        cout << -1;
    }cout << "\n";
    
    
    // smallest number greater than x in sorted array
    idx = upper_bound(ar, ar+n, x) - ar;
    if (idx<n){
        cout << ar[idx];
    }else{
        cout << -1;
    }cout << "\n";
    
}

int32_t main(){
    
    exploring_binary_bound();
    
    return 0;
}


/*

*/ 