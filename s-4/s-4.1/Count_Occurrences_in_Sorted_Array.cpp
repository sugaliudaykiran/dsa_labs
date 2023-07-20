#include <bits/stdc++.h> 
using namespace std;

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

int lastPosition(vector<int> &arr, int n, int k) {
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

int count(vector<int>& arr, int n, int x) {
	return (lastPosition(arr,n,x)==-1)?0:lastPosition(arr,n,x)-firstPosition(arr,n,x)+1;
}

/*

// Using lower & Upper Bound
int count(vector<int>& arr, int n, int x) {  // TC -> O(Log N).. 	SC -> O(1)..
	vector<int>::iterator low=lower_bound(arr.begin(), arr.end(),x);
	auto upper=upper_bound(arr.begin(), arr.end(),x);
	// return ((upper-arr.begin())-(low-arr.begin()));
	return upper-low;
}

// Using Linear search..

int count(vector<int>& arr, int n, int x) {
	int cnt=0;  // TC -> O(N)..		SC -> O(1)..
	for (int i=0;i<n;i++){  
		if (arr[i]==x){
			cnt++;
		}
	}return cnt;
}

*/ 

int32_t main(){
    
    int n,k;
    cin >> n >> k;
    
    vector<int>v(n);
    // int v[n];
    for (auto &x: v){
        cin >> x;
    }
    
    int cnt = count(v,n,k);
    cout << "count occurrences of "<< k <<" : "<< cnt << "\n";
    
    
    return 0;
}