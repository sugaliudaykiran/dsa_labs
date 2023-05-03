#include<bits/stdc++.h>
using namespace std;

void approach_1(int n){
    // using x = x/10;  
    int x=n, cnt=0;
    while(x != 0){
        x/=10;
        cnt++;
    }                // TC -> O(n) where n is digits of n.. SC -> O(1)..
    cout << cnt << "\n";
}

void approach_2(int n){
    // using string..
    string s=to_string(n);
    cout << s.size() << "\n";  // TC -> O(1).. SC -> O(1)..
}

void approach_3(int n){
    // using the upper bound of log10(n).
    int cnt= floor(log10(n) + 1);
    cout << cnt << "\n";     // TC -> O(1).. SC -> O(1)..
}

void approach_gfg(int n){
    int x=n, cnt=0; 
    while(x!=0){
        int each_digit=x%10;
        x/=10;              //  check edge cases also, in this divide by zero.
        if (each_digit != 0 && n%each_digit==0 ){
            cnt++;
            // cout << each_digit << " ";
        }
    }
    cout << cnt << "\n";
}

int32_t main(){
    
    int n;
    cin >> n;
    approach_1(n);
    approach_2(n);
    approach_3(n);
    approach_gfg(n);
    return 0;
}

// Count digits in a number