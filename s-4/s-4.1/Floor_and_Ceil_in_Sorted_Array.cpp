#include<bits/stdc++.h>
using namespace std;

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