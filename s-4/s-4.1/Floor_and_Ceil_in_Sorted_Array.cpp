#include<bits/stdc++.h>
using namespace std;

int floor(int *arr,int n,int k){
	int low=0,high=n-1,ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if (arr[mid]<=k){
			ans=arr[mid];
			low=mid+1;
		}else{
			high=mid-1;
		}
	}return ans;
};
int ceil(int *arr, int n, int k){
	int low=0,high=n-1,ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if (arr[mid]>=k){
			ans=arr[mid];
			high=mid-1;
		}else{
			low=mid+1;
		}
	}return ans;
};

pair<int, int> getFloorAndCeil(int arr[], int n, int k) {
    sort(arr,arr+n);        //  TC -> O(N LogN)..     SC -> O(1)..
	pair<int, int>res;
	res.first=floor(arr,n,k);
	res.second=ceil(arr,n,k);
	return res;
}

// =========================

pair<int, int> getFloorAndCeil(int arr[], int n, int k) {
    
	pair<int,int>res(-1,-1);  // TC -> O(N LogN)..     SC -> O(N)..
	sort(arr, arr+n);
// 	res.first=-1,res.second=-1;
    for (int i = 0; i < n; i++) {
		if (arr[i]==k){
			res.first=k, res.second=k;
			return res;
		}else if (arr[i]<k){
			res.first=arr[i];
		}else{
			res.second=arr[i];
			return res;
		}
    }return res;
}


int32_t main(){
    
    int n,k;
    cin >> n >> k;
    
    // vector<int>v(n);
    int v[n];
    for (auto &x: v){
        cin >> x;
    }
    
    pair <int,int> index = getFloorAndCeil(v,n,k);
    cout << "Floor : " << index.first << "\n";
    cout << "Ceil : " << index.second << "\n";
    
    return 0;
}