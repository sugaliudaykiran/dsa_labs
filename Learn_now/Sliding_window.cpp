#include<bits/stdc++.h>
using namespace std;

int sliding_window(int ar[], int n, int k){ // TC -> O(k*n) almost O(n*2) Nested Loop
    int Maxs = INT_MIN;
    // for (int i=0; i<n-k+1; i++){
    //     int cur_max = 0;
    //     for (int j=i; j<k+i; j++){
    //         cur_max += ar[j];    
    //     }
    //     if (cur_max > Maxs){
    //         Maxs = cur_max;
    //     }
    // }
    
    
    for (int i=0; i<n-k+1; i++){ // TC -> O(k*n)    SC -> O(1)
        int cur_max = 0;
        for (int j=0; j<k; j++){
            cur_max += ar[j+i]; // instead of adding in condition, doing in assignation
        }
        Maxs = max(cur_max, Maxs);
    }
    
    return Maxs;
}

int32_t main(){
    
    int n, k;
    cin >> n >> k;
    
    int ar[n-1];
    
    for (int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    
    // int ar[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    // int n = sizeof(ar) / sizeof(ar[0]);
    // int k = 4;
    int ans = sliding_window(ar, n, k);
    cout << ans << "\n";
    return 0;
}


// =================================================================

#include<bits/stdc++.h>
using namespace std;

int sliding_window(int *ar, int n, int k){  // TC -> 0(n)  SC -> O(1)..
    if (n < k){
        cout << "Invalid";
        return -1;
    }
    
    int Maxs = 0, cur_max = 0;
    
    for(int i=0; i<k; i++){
        Maxs += ar[i];
    }
    cur_max = Maxs;
    
    for (int j=k; j<n; j++){
        cur_max += ar[j] - ar[j-k];
        if (cur_max > Maxs){
            Maxs = cur_max;
        }
    }
    return Maxs;
}

int32_t main(){
    
    int n, k;
    cin >> n >> k;
    int ar[n-1];
    
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }
    
    cout << sliding_window(ar, n, k) << endl;
    return 0;
}