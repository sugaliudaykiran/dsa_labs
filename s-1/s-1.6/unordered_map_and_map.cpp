#include<bits/stdc++.h>
using namespace std;
//  Major reasons for using this maps were the range 1e8 is not possible in INT..
int hashTable(int n, int *ar, int fd){
    map<int, int>mp;  // sorted order.. (fetching, storing) TC -> O(log N).. SC -> O(N)
    
    for (int i=0; i<n; i++){
        mp[ar[i]]++;
    }
    return mp[fd];
}

int32_t main(){
    
    // hashing - pre storing && fetching..
    int n, quLen;
    cin >> n;
    int ar[n];
    
    unordered_map<int, int> ump;  // TC -> O(1).. in Avg, best.  O(N).. in worst case.
    for (int i=0; i<n; i++){     // SC -> O(N)
        cin >> ar[i];
        ump[ar[i]]++;
    }
    cin >> quLen;
    while (quLen--){
        int x;
        cin >> x;
        cout << "Frequency of "<< x << ": "<< hashTable(n,ar, x) <<" "<<"unordered_map: " << ump[x] <<  "\n";
    }
    return 0;
}