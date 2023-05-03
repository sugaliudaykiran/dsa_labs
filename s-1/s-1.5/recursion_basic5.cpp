#include<bits/stdc++.h>
using namespace std;

void printArr(int n, int *ar){
    for (int i=0; i<n; i++){
        cout << ar[i] << " ";
    }cout << "\n";
}

void app1(int n, int *ar){ 
    // extra volume  TC -> O(N)  SC -> O(N)
    int res[n];
    for (int i=n-1; i>=0; i--){
        res[n-i-1] = ar[i];
    }
    printArr(n, res);
}

void app2(int n, int ar[]){ // TC -> O(N).. AS -> O(1)
    int firstInd=0, lastInd=n-1;  
    while(firstInd < lastInd){
        swap(ar[firstInd++], ar[lastInd--]);
    }
    printArr(n, ar);
}

void app3(int n, int *ar){
    reverse(ar, ar+n);  // TC -> O(N).. AS -> O(1)
    printArr(n, ar);
}

void app4(int firstInd, int lastInd, int n, int *ar){
    if (firstInd > lastInd){  // TC -> O(N).. AS -> O(1)
        printArr(n, ar);
        return;
    }
    swap(ar[firstInd], ar[lastInd]);
    app4(firstInd+1, lastInd-1, n, ar);
}


int32_t main(){
    
    int n;
    cin >> n;
    int ar[n];
    for (int i=0; i<n; i++){
        cin >> ar[i];
    }
    
    app1(n, ar);
    app2(n, ar);
    app3(n, ar);
    app4(0, n-1, n, ar);
    
    return 0;
}