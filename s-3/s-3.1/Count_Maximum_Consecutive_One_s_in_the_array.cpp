#include<bits/stdc++.h>
using namespace std;

void Count(int n, int *ar){
    int cnt=0, maxs=INT_MIN; // TC -> O(N).. SC -> O(1)
    for (int i=0;i<n;i++){
        if (ar[i]==0){
            cnt=0;
        }else{
            cnt++;
            maxs=max(cnt, maxs);
        }
    }cout << maxs << "\n";
};

int32_t main(){
    
    int n;
    cin >> n;
    
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }
    Count(n, ar);
    return 0;
}