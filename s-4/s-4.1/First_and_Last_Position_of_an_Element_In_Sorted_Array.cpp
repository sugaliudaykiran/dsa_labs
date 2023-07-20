#include <bits/stdc++.h> 
using namespace std;

// int firstPosition(vector<int>& arr,  int n, int k){
//     for (int i=0;i<n;i++){  // TC -> O(2*N)..    SC -> O(1)
//         if (arr[i]==k){  // TC -> O(N)..    SC -> O(1)
//             return i;
//         }
//     }return -1;
// }
int firstPosition(vector<int> &arr, int n, int k) {
    int low=0,high=n-1,ans=-1; // TC -> O(Log N)..  SC -> O(1)..
    while(low<=high){
        int mid = low+(high-low)/2;
        if (arr[mid]>=k){
            if (arr[mid]==k){
                ans=mid;
            }
            high=mid-1;
        }else{
            low=mid+1;
        }
    }return ans;
}

// int secondPosition(vector<int>& arr,  int n, int k){
//     for (int i=n-1;i>=0;i--){  // TC -> O(N)..    SC -> O(1)
//         if (arr[i]==k){
//             return i;
//         }
//     }return -1;
// }

int LastPosition(vector<int> &arr, int n, int k) {
    int low=0,high=n-1,ans=-1; // TC -> O(Log N)..  SC -> O(1)..
    while(low<=high){
        int mid=(low+high)/2;
        if (arr[mid]<=k){
            if (arr[mid]==k){
                ans=max(ans,mid);
            }
            low=mid+1;
        }else{
            high=mid-1;
        }
    }return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int>res;  
    res.first=firstPosition(arr, n, k);
    res.second=lastPosition(arr, n, k);
    return res;
}

int32_t main(){
    
    int n,k;
    cin >> n >> k;
    
    vector<int>v(n);
    // int v[n];
    for (auto &x: v){
        cin >> x;
    }
    
    pair <int,int> index = firstAndLastPosition(v,n,k);
    cout << "First : " << index.first << "\n";
    cout << "Last : " << index.second << "\n";
    
    return 0;
}