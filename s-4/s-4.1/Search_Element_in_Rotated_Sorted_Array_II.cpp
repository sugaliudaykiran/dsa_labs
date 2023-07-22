#include<bits/stdc++.h>
using namespace std;

bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
    int n=A.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (A[mid]==key){  // TC -> O(Log N)..  SC -> O(1)..
            return true;
        }else if (A[mid]==A[low] && A[mid]==A[high]){
            low+=1; // previous case it won't work.. so we have to do this..
            high-=1; // compressing the pointers
        }else if (A[low]<=A[mid]){
            if (A[low]<=key && A[mid]>=key){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }else{
            if (A[mid]<=key && A[high]>=key){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }
    }return false;
}

// bool searchInARotatedSortedArrayII(vector<int>&A, int key) {
//     int n=A.size();
//     for (int i=0;i<n;i++){
//         if (A[i]==key){
//             return true;
//         }
//     }return false;
// }


int32_t main(){
    
    int n,k;
    cin >> n >> k;
    
    // int arr[n];
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    
    int idx = search2(v,k);
    (idx != -1)? cout << "Element "<< k << " is found at Index : " << idx : cout << "Element is Not found.";
    return 0;
}