#include<bits/stdc++.h>
using namespace std;

void approach_1(int n){
    // using x = x/10;  
    int x=n;
    string s="";
    while(x != 0){
        int last_digit=x%10;
        x/=10;
        s+=to_string(last_digit);
    }                // TC -> O(n) where n is digits of n.. SC -> O(1)..
    // cout << typeid(s).name() << "\n";
    cout << stoi(s) <<"\n";  // int stoi (const string&  str, size_t* index = 0, int base = 10); 
}

void approach_2(int n){
    // using string..
    string s=to_string(n);
    reverse(s.begin(), s.end());
    cout << stoi(s) << "\n";  // TC -> O(n).. AS -> O(1)..
}

void approach_3(int n){
    int x=n, rev=0;
    while(x){
        int last_digit = x%10;
        rev = rev*10 + last_digit;
        x /= 10;
    }cout << rev << "\n"; // Tc -> O(n).. AS -> O(1)..
}

uint64_t binstrToInt(string binstr ) {          
        uint64_t result = 0 ;
        int bit = 0; 
        while( binstr[bit] != '\0' )
        {
            if( binstr[bit] == '1' )
            {
                result |= 1 ;
            }
    
            bit++ ;
            if( binstr[bit] != '\0' )
            {
                result <<= 1 ;
            }
        }
    
        return result ;
}  
void approach_gfg(long long int n){
        string s="";
        for (int i=31; i>=0; i--){
            int k=n>>i;
            if (k&1){
                // cout << "1";
                s+='1';
            }else{
                // cout << "0";
                s+='0';
            }
        }   
        reverse(s.begin(), s.end());
        uint64_t x = binstrToInt(s);
        // return x;
        cout << x;
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