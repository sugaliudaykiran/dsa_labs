#include<bits/stdc++.h>
using namespace std;
// Example -1
void printTest(int test){
    if (test <= 0){  // TC -> O(N)..    SC -> O(N)..
        return;
    }
    cout << test << " ";
    printTest(test-1);
    cout << test << " ";
    return;
}

// Example -2   
void printNto1(int N){
    if (N < 1){   // TC -> O(N)..    SC -> O(N)..
        return;
    }
    cout << N << " ";
    printNto1(N-1);
}

// Example -3  => Method -1 
void print1toN(int i,int N){
    if (i==N){
        cout << i << " ";
        return;
    }cout << i << " ";
    print1toN(i+1, N);  // TC -> O(N)..    SC -> O(N)..
}

void print1toN(int N){
    print1toN(1,N);
}

// Example -3  => Method -2
void print1toN(int N){
    if (N>0){
        print1toN(N-1); // After the reaching the edge point, then started printing the values.
        cout << N << " ";
    }return;  // TC -> O(N)..    SC -> O(N)..
}


//  Example -4
int Natural_Number_Sum(int N){
    if (N<=1){
        return N;
    }
    return N+Natural_Number_Sum(N-1);
}

// Example -5   => Method -1
bool checkRecursive(string str, int start,int end){
    if (start=>end){
        return true;
    }
    
    if (str[start]!=str[end]){
        return false;
    }
    
    return checkRecursive(str,start+1,end-1);
}

bool Palindrome(string str){
    int n=str.size();
    int start=0, end=n-1;
    if (n==0 || n==1){
        return true;
    }
    return checkRecursive(str,start,end);
}

// Example -5   => Method -2
bool Palindrome(string str, int i){
    int n = str.size();
    if (i>n/2){
        return true;
    }
    return str[i]==str[n-i-1] && Palindrome(str, i+1);
}
// Example -6  => Method -1
int sum_of_digits(int num, int ans){
    if (num){
        ans += num%10;
        return sum_of_digits(num/10,ans);
    }return ans;
}
// Example -6  => Method -2
int sum_of_digits(int num){
    if (num==0){  // TC -> O(LogN)..    SC -> O(LogN).. where N is Given Number.
        return 0;
    }
    return num%10 + sum_of_digits(num/10);
}

// Example -7


int32_t main(){
        
    int test;
    cin >> test;
    
    printTest(test);
    
    return 0;
}