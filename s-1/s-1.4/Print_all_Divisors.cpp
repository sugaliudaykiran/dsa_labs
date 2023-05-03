#include<bits/stdc++.h>
using namespace std;

void printallDivisor1(int n){  
    for (int i=1;i<=n;i++){   // TC -> O(N).. SC -> O(1)..
        if (n%i==0){
            cout << i << " ";
        } 
    }cout << "\n";
}

void printallDivisor2(int n){   // TC -> O(sqrt(N))..  SC -> O(1)..
    for (int i=1;i<=sqrt(n);i++){
        if (n%i==0){
            cout << i <<" ";
            if (n/i != i){
                cout << n/i << " ";
            }
        }

    }cout << "\n";
}


int32_t main(){
    
    int num;
    cin >> num;
    
    printallDivisor1(num);
    printallDivisor2(num);
    return 0;
}