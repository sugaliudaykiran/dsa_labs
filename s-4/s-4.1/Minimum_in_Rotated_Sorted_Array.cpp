#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr)
{
    int n=arr.size();
	int low=0, high=n-1, minEle=INT_MAX;
    while(low<=high){  // where N is the size of array.
        int mid=low+(high-low)/2; // TC -> O(Log N)..   SC -> O(1)..
        if (arr[low]<=arr[high]){  // Perform when entire array is sorted.
            minEle=min(minEle,arr[low]);
            return minEle;
        }
        if (arr[low]<=arr[mid]){ // Perform when left half is sorted, move towards right half for finding the minELement.
            minEle=min(minEle,arr[low]);
            low=mid+1;
        }else{ // Perform when right half is sorted, move towards left half  for finding the minELement.
            minEle=min(minEle,arr[mid]);
            high=mid-1;
        }
    }return minEle;
}

// int findMin(vector<int>& arr)
// {
// 	int n=arr.size(), minEle=INT_MAX;
// 	for (int i=0;i<n;i++){
// 		minEle=min(minEle,arr[i]);
// 	}return minEle;
// }

int32_t main(){
    
    int n;
    cin >> n;
    
    // int arr[n];
    vector<int>v(n);
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    
    int idx = findMin(v);
    cout << "Minimum Element of array : "  << idx << "\n";
    return 0;
}