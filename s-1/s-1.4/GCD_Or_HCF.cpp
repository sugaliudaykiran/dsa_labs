#include<bits/stdc++.h>
using namespace std;

int approach1(int a, int b){
    int res;
    for (int i=1;i<=min(a,b); i++){
        if (a%i==0 && b%i==0){
            res=i;                     
        }
    }return res;
}

int approach2(int a, int b){  // using euclidean's law.
    // int res=0;
    if (b == 0){
        return a;
    }
    return approach2(b, a%b);
}

int32_t main(){
    
    int a, b;
    cin >> a >> b;

    cout << approach1(a, b) << "\n";
    cout << approach2(a, b) << "\n";
    // approach2(a, b);

    return 0;
}

/*

GCD Or HCF
Recursively call gcd(b,a%b) function till the base condition is hit.
b==0 is the base condition.When base condition is hit return a,as gcd(a,0) is equal to a.
*/ 