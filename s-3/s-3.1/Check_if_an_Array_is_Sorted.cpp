#include<bits/stdc++.h>
using namespace std;

bool check(int *ar, int n){
    for (int i=1;i<n;i++){ // TC -> O(N).. SC -> O(1)..
        if (ar[i]<ar[i-1]){
            return false;
        }
    }return true;
}

bool checkIncreasingOrder(int *ar, int n){
    for (int i=0;i<n-1;i++){
        if (ar[i]<=ar[i+1]){
            continue;
        }else{
            return false;
            break;
        }
    }return true;
}

bool checkDecreasingOrder(int *ar, int n){
    for (int i=0;i<n-1;i++){
        if (ar[i]>=ar[i+1]){
            continue;
        }else{
            return false;
            break;
        }
    }return true;
}

void checkSorted(int *ar, int n){
    if (checkIncreasingOrder(ar, n) || checkDecreasingOrder(ar, n)){
        cout << true;
    }else{
        cout << false;
    }
}

int32_t main(){
    
    int n;
    cin >> n;
    
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }
    // checkSorted(ar, n);
    cout << check(ar, n)?"True":"False";
    return 0;
}