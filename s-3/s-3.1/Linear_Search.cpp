#include<bits/stdc++.h>
using namespace std;

void fun(int n,int *ar,int x){
    bool outOfIndex=true;
    for (int i=0;i<n;i++){  // TC -> O(N).. SC -> O(1)..
        if (ar[i]==x){
            cout << x <<" is present in the "<< i << " nd index";
            outOfIndex=false;
            break;
        }
    }if (outOfIndex){
        cout << x << " is out of Index in the given array.";
    }
}

int32_t main(){
    
    int n,x;
    cin >> n >> x;
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }

    fun(n,ar,x);
    
    // for (int i=0;i<n;i++){
    //     cout << ar[i] << " ";
    // }
    return 0;
}