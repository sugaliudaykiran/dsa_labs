#include<bits/stdc++.h>
using namespace std;


int32_t main(){

    int n;
    cin >> n;
    int ar[n+1];
    for (int i=0;i<n;i++){
        cin >> ar[i];
    }
    // int maxEle=INT_MIN;
    // for (int i=0;i<n;i++){  // TC -> O(N)..
    //     if (maxEle<ar[i]){
    //         maxEle=ar[i];
    //     }
    // }
    // cout << maxEle << "\n";
    
    sort(ar, ar+n);    // TC -> O(N LogN)..  SC -> O(N)..
    cout << ar[n-1] << "\n";
    
    return 0;
}