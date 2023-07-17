#include<bits/stdc++.h>
using namespace std;

int lowerBound2(vector<int> arr, int n, int x) { // lowerBound -> Equal(first occurance) or just greater in left to right.
	int low=0, high=n-1; //     TC -> O(LogN)..     SC -> O(1)..
	int ans=n;
	while(low<=high){  // Using Binary Search..
		int mid=(low+high)/2;
		if (arr[mid]>=x){ // comparing with the mid and update the least/most frequent one.
			ans=mid;
			high=mid-1;
		}else{
			low=mid+1;
		}
	}return ans;
}

int lowerBound(vector<int> arr, int n, int x){
    for (int i=0;i<n;i++){
        if (arr[i]>=x){  // TC -> O(N)..     SC -> O(1)..
            return i;
        }
    }return n;
}


int32_t main(){
    
    int n,k;
    cin >> n >> k;
    
    // int ar[n];
    vector<int>ar(n);
    for (auto &x: ar){
        cin >> x;
    }
    
    int res=lowerBound(ar, n, k);
    cout << "lowerBound of "<< k << " : " << res;
    
    return 0;
}