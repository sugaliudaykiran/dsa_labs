#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr){
    int n=arr.size();  // TC -> O(Log N)..      SC -> O(1)..
    int low=0,high=n-1,cnt=0,minEle=INT_MAX;   
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[low]<arr[high]){
            return low; //  return when entire array is sorted..
        }
        if (arr[low]<=arr[mid]){  // left sorted..
            if (minEle>arr[low]){
                minEle=arr[low]; // Comparing the low element with the minEle..
                cnt=low;
            }low=mid+1;
        }else{
            if (minEle>arr[mid]) { // right sorted..
               minEle=arr[mid];
               cnt=mid;
            }
            high=mid-1;
        }
    }return cnt;
}

// int findKRotation(vector<int> &arr){
//     int n=arr.size();
//     for (int i=0;i<n-1;i++){
//         if (arr[i]>arr[i+1]){
//             return i+1;
//         }
//     }return 0;
// }

// int findKRotation(vector<int> &arr){
//     int n=arr.size();        //  Using Linear Search..
//     for (int i=n-1;i>=1;i--){  // TC -> O(N)..    SC -> O(1)..
//         if (arr[i]<arr[i-1]){
//             return i;
//         }
//     }return 0;
// }


int32_t main(){
    
    int n;
    cin >> n;
    
    // int arr[n];
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    
    int cnt = findKRotation(v);
    cout << "Count of rotation in the array : "  << cnt << "\n";
    return 0;
}