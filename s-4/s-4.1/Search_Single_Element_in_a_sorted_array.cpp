#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int>& arr)
{
	int n=arr.size();
	if (n==1){   // 	TC -> O(Log N)..	SC -> O(1)..
		return arr[0];
	}if (arr[0]!=arr[1]){
		return arr[0];
	}if (arr[n-1]!=arr[n-2]){
		return arr[n-1];
	}int low=1,high=n-2;
	while (low<=high){
		int mid=low+(high-low)/2;
		if (arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]){
			return arr[mid];
		}else if ((mid%2!=0 && arr[mid]==arr[mid-1]) || (mid%2==0 && arr[mid]==arr[mid+1])){
			low=mid+1;
		}else{
			high=mid-1;
		}
	}return -1;
}

// int singleNonDuplicate(vector<int>& arr)
// {
// 	int n=arr.size();
// 	if (n==1){
// 		return arr[0];
// 	}
// 	for (int i=0;i<n;i++){  // TC -> O(N)..		SC -> O(1)..
// 		if (i==0){
// 			if (arr[i]!=arr[i+1]){
// 				return arr[i];
// 			}
// 		}else if (i==n-1){
// 			if (arr[i]!=arr[i-1]){
// 				return arr[i];
// 			}
// 		}else {
// 			if (arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
// 				return arr[i];
// 			}
// 		}
// 	}return -1;
// }

// int singleNonDuplicate(vector<int>& arr)
// {
// 	int n=arr.size(), ans=arr[0];
// 	int p1=1,p2=n-1;
// 	while(p1<p2){
// 		ans ^= arr[p1++];
// 		ans ^= arr[p2--];
// 	}return ans;
	
	// for (int i=1;i<n;i++){
	// 	ans ^= arr[i]; 
	// }return ans;
// }


// int singleNonDuplicate(vector<int>& arr)
// {
// 	int n=arr.size();
// 	for (int i=n-1;i>=0;i-=2){  // TC -> O(N)..	  SC -> O(1)
// 		if (arr[i]!=arr[i-1]){
// 			return arr[i];
// 		}
// 	}return -1;
// }


// int singleNonDuplicate(vector<int>& arr)
// {
// 	int n=arr.size();  // TC -> O(N)..	  SC -> O(1)
// 	for (int i=0;i<=n-1;i+=2){
// 		if (arr[i]!=arr[i+1]){
// 			return arr[i];
// 		}
// 	}return -1;
// }


int32_t main(){
    
    int n;
    cin >> n;
    
    vector<int>v(n);
    for (auto &x: v){
        cin >> x;
    }
    
    int ele=singleNonDuplicate(v);
    cout << "Single Appears in the Vector : " << ele << "\n";
    
    return 0;
}