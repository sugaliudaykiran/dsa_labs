#include<bits/stdc++.h>
using namespace std;

int search2(vector<int>& arr, int n, int k)
{
    int low=0,high=n-1;
    while(low<=high){  // TC -> O(LogN).. SC -> O(1)..
        int mid=low+(high-low)/2;
        if (arr[mid]==k){
            return mid;
        }
        else if (arr[low]<=arr[mid]){ // assuming the left half is sorted.
            if (arr[low]<=k && arr[mid]>=k){
                high=mid-1;
            }else{
                low=mid+1;
            }            
        }else{  // Right half is sorted..
            if (arr[mid]<=k && arr[high]>=k){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }return -1;
}

// int search(vector<int>& arr, int n, int k)
// {    
//     for (int i=0;i<n;i++){       //  TC -> O(N)..    SC -> O(1)..
//         if (arr[i]==k){
//             return i;
//         }
//     }return -1;
// }

int32_t main(){
    
    int n,k;
    cin >> n >> k;
    
    // int arr[n];
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    
    int idx = search2(v,n,k);
    (idx != -1)? cout << "Element "<< k << " is found at Index : " << idx : cout << "Element is Not found.";
    return 0;
}