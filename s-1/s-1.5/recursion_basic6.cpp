#include<bits/stdc++.h>
using namespace std;

void fun(int firstInd, int lastInd, string str){ 
    if (str[firstInd] != str[lastInd]){  // TC -> O(N)  SC -> O(1)
        cout << "Not an Palindrome Number.." << "\n";
        return;   
    }
    if (firstInd > lastInd){
        cout << "Yes an Palindrome Number.." << "\n";
        return;
    }
    fun(firstInd+1, lastInd-1, str);
}

int32_t main(){
    
    string str;
    cin >> str;
    int n=str.size();
    fun(0, n-1, str);
    cout << 1?"yes":"no";
    return 0;
}