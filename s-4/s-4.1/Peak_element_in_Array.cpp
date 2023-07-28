#include<bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &arr) {
    int n=arr.size(), MinEle=INT_MIN;  // TC -> O(Log N).. SC -> O(1)..
    if (n==1){
        return 0;
    }if (arr[0]>arr[1] && arr[0]>MinEle){
        return 0;
    }if (arr[n-1]>arr[n-2] && arr[n-1]>MinEle){
        return n-1;
    }
    int low=1,high=n-2;
    while(low<=high){
        int mid=low+(high-low)/2;
        if (arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            return mid;
        }if (arr[mid]>arr[mid-1]){
            low=mid+1;
        }else {
            high=mid-1;
        }
    }return -1;
}


// int findPeakElement(vector<int> &arr) {
//     int n=arr.size(), MinEle=INT_MIN;
//     if (n==1){
//         return 0;
//     }
//     for (int i=0;i<n;i++){  //  TC -> O(N)..    SC -> O(1)..
//         if (i==0){
//             if (arr[i]>MinEle && arr[i]>arr[i+1]){
//                 return i;
//             }
//         }if (i==n-1){
//             if (arr[i]>MinEle && arr[i]>arr[i-1]){
//                 return i;
//             }
//         }if (arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//             return i;
//         }
//     }return -1;
// }


int32_t main(){
    
    int n;
    cin >> n;
    
    vector<int>v(n);
    for (auto &x: v){
        cin >> x;
    }
    
    int ele=findPeakElement(v);
    cout << "Peak Index in the Vector : " << ele << "\n";
    
    return 0;
}