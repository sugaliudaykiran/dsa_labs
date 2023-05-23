#include<bits/stdc++.h>
using namespace std;

int hashTable(int n,int x, int *ar){
    // vector<int>v(12, 0);
    int frq[101] = {0};
    for (int i=0;i<n; i++){
        // v[ar[i]]++;
        frq[ar[i]]+=1;
    }
    return frq[x];
    // return v[x];
}

int32_t main(){
    
    // hashing - pre storing && fetching..
    int n, quLen;
    cin >> n;
    int ar[n]; // assuming number range upto 12 digit val
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }
    cin >> quLen;
    
    while (quLen--){
        int x;
        cin >> x;
        cout << "Frequency of "<< x << ": "<< hashTable(n,x, ar) << "\n";
    }
    return 0;
}