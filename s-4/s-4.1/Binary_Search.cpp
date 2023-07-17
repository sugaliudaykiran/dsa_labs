#include<bits/stdc++.h>
using namespace std;

int BinarySearchRecursive(int *ar, int low, int high, int k){
    if (low>high){  // TC -> O(LogN).. SC -> O(1)..
        return -1;
    }
    int mid=(low+high)/2;
    if (ar[mid]==k){
        return mid;
    }else if(ar[mid]<k){
        return BinarySearchRecursive(ar,mid+1,high,k);
    }else{
        return BinarySearchRecursive(ar,low,mid-1,k);
    }
}

int BinarySearchIterative(int n,int *ar, int k){
    int low=0,high=n-1;  // TC -> O(LogN).. SC -> O(1)..
    while(low<=high){
        int mid=(low+high)/2;
        if (ar[mid]==k){
            return mid;
        }else if (ar[mid]<k){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }return -1;
}
int32_t main(){
    
    int n,k;
    cin >> n >> k;
    int ar[n];
    for (int &x: ar){
        cin >> x;
    }
    
    // int index= BinarySearchIterative(n,ar,k);
    int index=BinarySearchRecursive(ar,0,n-1,k);
    if (index==-1){
        cout << "Element is not found the Sorted Array." << "\n";
    }else{
        cout << "Element is Found at Index : " << index << " in the Sorted Array." << "\n";
    }
    return 0;
}