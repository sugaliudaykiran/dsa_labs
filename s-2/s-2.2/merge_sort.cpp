#include<bits/stdc++.h>
using namespace std;

// merge sort  TC -> O(NLogN)..  SC -> O(N)..
void merge(int *ar, int start, int mid, int end){
    int i=0, j=0, k=start, n1=(mid-start+1), n2= end-mid;
    int left[n1], right[n2];
    
    for (int i=0; i<n1; i++){
        left[i] = ar[start+i];
    }
    for (int j=0; j<n2; j++){
        right[j] = ar[mid+j+1];
    }
    
    while(i<n1 && j<n2){
        if (left[i] <= right[j]){
            ar[k]=left[i++];
        }else{
            ar[k]=right[j++];
        }k++;
    }
    while(i<n1){
        ar[k++]=left[i++];
    }while(j<n2){
        ar[k++]=right[j++];
    }
}

void mergesort(int* ar, int start, int end){
    if (end > start){
        int mid=start+(end-start)/2;
        mergesort(ar, 0, mid);
        mergesort(ar, mid+1, end);
        merge(ar, start, mid, end);
    }
}

int32_t main(){
    
    int n;
    cin >> n;
    int ar[n];
    for (auto &i: ar){
        cin >> i;
    }
    
    mergesort(ar, 0, n);
    for (auto &x: ar){
        cout << x << " ";
    }cout << "\n";
    return 0;
}
// =======================
#include<bits/stdc++.h>
using namespace std;

void merge(int *ar, int start, int mid, int end){
    
    int n1=(mid-start+1),n2=end-mid, left[n1], right[n2];
    for (int i=0; i<n1; i++){
        left[i] = ar[start+i];
    }for (int j=0; j<n2; j++){
        right[j] = ar[mid+j+1];
    }
    
    int i=0,j=0,k=start;
    while (i<n1 && j<n2){
        if (left[i] <= right[j]){
            ar[k] = left[i++];
        }
        else{
            ar[k] = right[j++];
        }k++;
    }
    
    while(i<n1){
        ar[k++] = left[i++];
    }while(j<n2){
        ar[k++] = right[j++];
    }
}

void mergesort(int *ar, int start, int end){
    if (end > start){
        int mid = start + (end - start)/2;
        mergesort(ar, start, mid);
        mergesort(ar, mid+1, end);
        merge(ar, start, mid,end);
    }
}


int32_t main(){
    
    int n;
    cin >> n;
    int ar[n];
    for (auto &i: ar){
        cin >> i;
    }
    
    mergesort(ar, 0, n);
    for (auto &x: ar){
        cout << x << " ";
    }cout << "\n";
    return 0;
}