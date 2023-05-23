#include<bits/stdc++.h>
using namespace std;

void sorts(int* ar, int start, int n){
    if (start >= n-1){
        return;    //       tc -> O(N^2).. SC -> O(N)
    }
    int smlIndex = start;
    for (int i=start; i<n; i++){
        if(ar[smlIndex] > ar[i]){
            smlIndex = i;
        }
    }
    swap(ar[smlIndex], ar[start]);
    sorts(ar, start+1, n);
}
void sorts2(int* ar, int start, int n){
    if (start == n){
        return; //       tc -> O(N^2).. SC -> O(N) .. best case => O(N)
    }
    int i=start;
    while(i>0 && ar[i-1]>ar[i]){
        swap(ar[i-1], ar[i]);
        i--;
    }sorts2(ar, start+1, n);
}
int32_t main(){
    
    int n;
    cin >> n;
    int ar[n];
    for (auto &i: ar){
        cin >> i;
    }
    
    sorts(ar, 0,n);
    for (auto &x: ar){
        cout << x << " ";
    }cout << "\n";
    return 0;
}