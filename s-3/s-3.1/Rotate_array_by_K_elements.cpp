#include<bits/stdc++.h>
using namespace std;

void funLeft(int *ar, int n,int k){
    if (n==0){
        return;
    }
    k=k%n;
    if (k>n){
        return;
    }
    for(int i=0;i<k;i++){ // TC -> O(K*N).. SC -> O(1)
        int temp=ar[0];
        for (int i=0;i<n-1;i++){
            ar[i]=ar[i+1];
        }ar[n-1]=temp;
    }
    
    for (int i=0;i<n;i++){
        cout << ar[i] << " ";
    }
}

void funRight(int *ar, int n,int k){
    if (n==0){
        return;
    }
    k=k%n;
    if (k>n){
        return;
    }
    for(int i=0;i<k;i++){
        int temp=ar[n-1];
        for (int i=n-1;i>0;i--){
            ar[i]=ar[i-1];
        }ar[0]=temp;
    }
    
    for (int i=0;i<n;i++){
        cout << ar[i] << " ";
    }
}

int32_t main(){
    
    int n,k;
    cin >> n >> k;
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }
    // fun(ar, n);
    // funRight(ar,n,k);
    funLeft(ar, n, k);
    return 0;
}

// =========================================
#include<bits/stdc++.h>
using namespace std;

void funLeft(int *ar, int n,int k){
    if (n==0){
        return;
    }
    k=k%n;
    if (k>n){
        return;
    }
    int temp[k];
    for (int i=0;i<k;i++){  // TC -> O(K + N).. SC -> O(K)
        temp[i]=ar[i];
    }for (int i=k;i<n;i++){
        ar[i-k]=ar[i];
    }for (int i=n-k;i<n;i++){
        ar[i]=temp[i-(n-k)];
    }
    
    for (int i=0;i<n;i++){
        cout << ar[i] << " ";
    }
}

void funRight(int *ar, int n,int k){
    if (n==0){
        return;
    }
    k=k%n;
    if (k>n){
        return;
    }
    int temp[k];
    for (int i=n-k;i<n;i++){
        temp[i-(n-k)]=ar[i];
    }for (int i=n-k-1;i>=0;i--){
        ar[i+k]=ar[i];
    }for (int i=0;i<k;i++){
        ar[i]=temp[i];
    }
    
    for (int i=0;i<n;i++){
        cout << ar[i] << " ";
    }
}

int32_t main(){
    
    int n,k;
    cin >> n >> k;
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }
    // fun(ar, n);
    funRight(ar,n,k);
    // funLeft(ar, n, k);
    return 0;
}

// ===============================================
#include<bits/stdc++.h>
using namespace std;

void fun(int *ar, int n,int k){
    if (n==0){
        return;  // TC -> O(2N).. SC -> O(1)
    }
    k=k%n;
    if (k>n){
        return;
    }
    reverse(ar+k, ar+n); // right shift..
    reverse(ar, ar+k);  // In left shift the above line will come after the current the line.
    reverse(ar, ar+n);
    
    for (int i=0;i<n;i++){
        cout << ar[i] << " ";
    }
}

int32_t main(){
    
    int n,k;
    cin >> n >> k;
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }

    fun(ar, n, k);
    return 0;
}