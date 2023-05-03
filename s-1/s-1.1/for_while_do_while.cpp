#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int n;
    cin >> n;
    int ar[n-1];
    for (int i=0; i<n; i++)
    {
        cin >> ar[i];
    }
    
    for (int i=0; i<n; i++){
      cout <<  ar[i] << " ";
    }cout << "\n";
       
       
    int j = 0;
    while(j < 19){
        cout << "yes"<< " "<< "val of j: " << j << "\n";
        j++;
    }cout << endl;
    
    
    
    int k = 10;
    do {
        cout << "do while prints altest one what ever the case" << k++;
    }while(k>3); // If condition is true it will prints "INF" else ones..
    
    return 0;
}