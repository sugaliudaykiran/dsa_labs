#include<bits/stdc++.h>
using namespace std;

void fun(int n,int *ar){
    int temp[n], cnt=0, j=0;  // TC -> O(2N).. SC -> O(N)
    for (int i=0;i<n;i++){
        if (ar[i]!=0){
            temp[j++]=ar[i];
        }else{
            cnt++;
        }
    }for (int i=0;i<cnt;i++){
        ar[j+i]=0;
    }for (int i=0;i<j;i++){
        ar[i]=temp[i];
    }
}

void fun2(int n, int *ar){
    int j=0; // TC -> O(N*K).. SC -> O(1)
    for (int i=0;i<n;i++){
        if (ar[i]==0){
            for (int j=i+1;j<n;j++){
                if (ar[j]!=0){
                    swap(ar[i],ar[j]);
                    break;
                }
            }if (j==n){
                break;
            }
        }
    }
}

void fun3(int n, int *ar){ // TC -> O(N).. AS -> O(1).
    int j=-1;
    for (int i=0;i<n;i++){
        if (ar[i]==0){
            j=i;
            break;
        }
    }
    if (j==-1){
        return;
    }for (int i=j+1;i<n;i++){
        if (ar[i]!=0){
            swap(ar[i],ar[j]);
            j++;
        }
    }
}


int32_t main(){
    
    int n;
    cin >> n;
    int ar[n];
    for (auto &x: ar){
        cin >> x;
    }

    // fun(n,ar);
    fun2(n,ar);
    // fun3(n,ar);
    for (int i=0;i<n;i++){
        cout << ar[i] << " ";
    }
    return 0;
}