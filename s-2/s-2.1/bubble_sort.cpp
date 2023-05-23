#include<bits/stdc++.h>
using namespace std;

// bubble sort
void fun(int n, int *ar){
    for (int i=n-1; i>=0; i--){ // TC -> O(n^2).. SC -> 0(1)
        int maxEle=INT_MIN, maxInd=-1;
        for (int j=0; j<=i; j++){
            if (ar[j]>maxEle){
                maxEle=ar[j];
                maxInd=j;
            }
        }
        swap(ar[i], ar[maxInd]);
    }
    for (int i=0; i<n; i++){
        cout << ar[i] << " ";
    }cout << "\n";
}

void fun2(int n, int *ar){  // TC -> O(n^2)..  SC -> O(1)..
    for (int i=n-1; i>=0;i--){
        bool swapHappend=true; // assusming if array is sorted, ignoring the nested loop.
        for (int j=0; j<=i-1; j++){
            if (ar[j]>ar[j+1]){  // bcz to swap the last but-one element with last element.
                swap(ar[j], ar[j+1]);
                swapHappend=false;
            }
        }if (swapHappend){ // by condition to stop.
            break;
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
    fun2(n, ar);
    return 0;
}