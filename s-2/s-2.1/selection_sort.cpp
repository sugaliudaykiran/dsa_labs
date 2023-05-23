#include<bits/stdc++.h>
using namespace std;

// selection sort - 
void fun(int n, int *ar){
    for(int i=0; i<n-1; i++){
        int minInd=i;       //  TC -> O(N^2)..  SC -> O(1)..
        for(int j=i+1;j<n;j++){
            if (ar[minInd] > ar[j]){
                minInd=j;
            }
        }
        swap(ar[i], ar[minInd]);
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