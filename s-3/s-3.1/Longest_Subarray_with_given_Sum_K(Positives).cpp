#include<bits/stdc++.h>
using namespace std;

int LongSubArrayLen(int n, int *ar, int k){
    int Maxs=INT_MIN;  // Using two pointer..
    for (int i=0;i<n;i++){  //  TC -> O(N^2)..      SC -> O(1)..
        int xsum=0;
        for (int j=i;j<n;j++){
            xsum+=ar[j];
            if (xsum==k){
                Maxs=max(Maxs,j-i+1);
            }
        }
    }return Maxs;
}

pair<int,int> LongestSubArray(int n, int *ar, int x){
    int Maxs=INT_MIN;
    pair<int,int>p;
    p.first=-1, p.second=-1;  // TC -> O(N^3)..     SC -> O(1)..
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            int xsum=0;
            for (int k=i;k<=j;k++){
                xsum+=ar[k];
            }
            if (xsum==x && Maxs<(j-i)+1){
                Maxs=(j-i)+1;
                p.first=i,p.second=j;
            }
        }
    }return p;
}

void subArrayEqualK(int n, int *ar, int x){
    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){  // TC -> O(N^3)..   SC -> O(1)..
            int xSum=0;
            for (int k=i;k<=j;k++){
                xSum += ar[k];
            }
            if (xSum==x){
                for (int k=i;k<=j;k++){
                    cout << ar[k] << " ";
                }cout << "\n";
            }
        }
    }
}

void subArray(int n, int *ar){  // subArray is an contiguous part of array..
    for (int i=0;i<n;i++){ // pointing the start point of subArray..
        for (int j=i;j<n;j++){  // pointing the end point to the subArray..
            for (int k=i;k<=j;k++){  //  printing the subArray..
                cout << ar[k] << " ";  // TC -> O(N^3)..    SC -> O(1)..
            }cout << "\n";
        }
    }
}

int32_t main(){
    
    int n,k;
    cin >> n >> k;
    
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }
    // subArray(n,ar);
    // subArrayEqualK(n, ar, k);
    
    // pair<int,int>p = LongestSubArray(n, ar, k);
    // for (int i=p.first;i<=p.second;i++){
    //     cout << ar[i] << " ";
    // }cout << "\n";
    
    int count = LongSubArrayLen(n, ar, k);
    cout << count << "\n";
    return 0;
}