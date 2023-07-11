#include<bits/stdc++.h>
using namespace std;

void Appears(int n, int *ar){
    // BruteForce -> Linear Search..
    for (int i=0;i<n;i++){  // TC -> O(N^2)..   SC -> O(1)..
        int cnt=0, cur=ar[i];
        for (int j=0;j<n;j++){
            if (ar[j]==cur){
                cnt++;
            }
        }if (cnt==1){
            cout << cur << "\n";
            break;
        }
    }
};

void Appears2(int n, int *ar){
    int MaxEle=INT_MIN;
    for(int i=0;i<n;i++){ // Using Hashing..
        MaxEle=max(MaxEle, ar[i]);
    }
    vector<int>freq(MaxEle+1); // TC -> O(N+N+N)..     SC -> O(MaxEle+1)..
    for (int i=0;i<n;i++){
        freq[ar[i]]++;
    }
    for (int i=0;i<=MaxEle;i++){
        if (freq[i]==1){
            cout << i << "\n";
            return;
        }
    }
}

void Appears3(int n, int *ar){
    map<int,int>mp;  // unordered_map takes O(1).. In best case but in the worst case it will be O(N^2)..
    for (int i=0;i<n;i++){  // TC -> O(N*Log M).. SC -> O(M).. where M is size of map.
        mp[ar[i]]++; 
    }for (auto &x: mp){
        if (x.second==1){
            cout << x.first << "\n";
            return;
        }
    }
}

void Appears4(int n, int *ar){
    int single=ar[0]; // Using XOR..
    for (int i=1;i<n;i++){ // TC -> O(N)..  SC -> O(1)..
        single ^= ar[i];
    }cout << single << "\n";
}

int32_t main(){
    
    int n;
    cin >> n;
    
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }
    Appears4(n, ar);
    return 0;
}