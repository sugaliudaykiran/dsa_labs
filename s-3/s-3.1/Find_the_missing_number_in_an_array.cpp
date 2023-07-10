#include<bits/stdc++.h>
using namespace std;

void Missing(int n,int *ar){
    vector<bool>check(n+1); // TC -> O(2N)..     SC -> O(N)..
    for (int i=0;i<n;i++){
        check[ar[i]]=true;
    }for (int i=1;i<check.size();i++){  
        if (check[i]!=true){
            cout << i << " ";
        }
    }
}

int32_t main(){
    
    // int n;
    // cin >> n;
    // int ar[n];
    // for (auto &x: ar){
    //     cin >> x;
    // }
    int n = 3;
    int ar[n]={1, 3};
    
    Missing(n, ar);
    
    return 0;
}