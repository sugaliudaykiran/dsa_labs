#include<bits/stdc++.h>
using namespace std;

void isPrime1(int n){  
    bool isnotPrime=false;
    for (int i=2;i<n;i++){   // TC -> O(N).. SC -> O(1)..
        if (n%i==0){
            isnotPrime=true;
            break;
        } 
    }if (!isnotPrime){
        cout << "Given "<<n << " is a Prime Number." <<"\n";
    }
}

void isPrime2(int n){   // TC -> O(sqrt(N))..  SC -> O(1)..
    bool isnotPrime=false;
    for (int i=2;i<sqrt(n);i++){   // TC -> O(N).. SC -> O(1)..
        if (n%i==0){
            isnotPrime=true;
            break;
        } 
    }if (!isnotPrime){
        cout << "Given "<<n << " is a Prime Number." <<"\n";
    }
}


int32_t main(){
    
    int num;
    cin >> num;
    
    isPrime1(num);
    isPrime2(num);
    return 0;
}