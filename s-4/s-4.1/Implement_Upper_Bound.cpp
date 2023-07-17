#include<bits/stdc++.h>
using namespace std;

int upperBound2(vector<int> &arr, int n, int x){
	int low=0, high=n-1,ans=n; // Using BinarySearch .. TC -> O(LogN).. SC -> O(1)..
	while(low<=high){
		int mid=(low+high)/2;
		if (arr[mid]<=x){
			low=mid+1;			
		}else{
			ans=mid;
			high=mid-1;
		}
	}return ans;
}

int upperBound(vector<int> &arr, int n, int x){
	for (int i=0;i<n;i++){ // Using Linear search.. TC -> O(N).. SC -> O(1)..
		if (arr[i]>x){
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
    
    int res=upperBound(ar, n, k);
    cout << "upperBound of "<< k << " : " << res;
    
    return 0;
}