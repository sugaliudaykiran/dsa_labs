#include<bits/stdc++.h>
using namespace std;

int searchInsert2(vector<int>& arr, int m){   
    int n=arr.size();
    int low=0,high=n-1,ans=n;
    while(low<=high){  // TC -> O(LogN)..  SC -> O(1)..
        int mid=(low+high)/2; // dividing the arr/vector into half in the each search.
        if (arr[mid]<m){
            low=mid+1;
        }else if (arr[mid]>m){
            ans=mid;
            high=mid-1;
        }else{
            return mid;
        }
    }return ans;
}

int searchInsert(vector<int> &arr, int m) {
	int n=arr.size();
	for (int i=0;i<n;i++){  // TC -> O(N).. SC -> O(1)..
		if (arr[i]>=m){
			return i;
		}
	}return n;	
}
int32_t main(){
    
    int n,k;
    cin >> n >> k;
    
    vector<int>v(n);
    for (auto &x: v){
        cin >> x;
    }
    
    int index = searchInsert(v,k);
    cout << "Search Insert Position : " << index << "\n";
    
    return 0;
}