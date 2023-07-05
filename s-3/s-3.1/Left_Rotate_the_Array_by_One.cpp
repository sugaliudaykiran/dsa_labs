#include<bits/stdc++.h>
using namespace std;

void fun(int *ar, int n){ // storing the first item and moving the towards to left and appending the first item to end of array.
    int temp=ar[0];  // TC -> O(N)..  SC -> O(1).. 
    for (int i=0;i<n-1;i++){
        ar[i]=ar[i+1];
    }ar[n-1]=temp; 
    
    for (int i=0;i<n;i++){
        cout << ar[i] << " ";
    }
}
// write a function to left rotate the array by one.
// input: 1 2 3 4 5
// output: 2 3 4 5 1


int32_t main(){
    
    int n;
    cin >> n;
    
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }
    fun(ar, n);
    return 0;
}