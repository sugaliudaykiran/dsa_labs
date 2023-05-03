#include<bits/stdc++.h>
using namespace std;

void approach1(int n){
    string s=to_string(n);
    
    int i=0, j=s.size()-1;
    while(i<j){
        if (s[i] != s[j]){
            cout << "Given num is not an Palindrome." << "\n";
            break;  
        }
        else if (s[i] == s[j]){
            i++, j--;
        }
    }if (i>=j){
       cout << "Given num is an Palindrome."<<"\n";
    }
}
void approach2(int n){
    string s=to_string(n);
    stack<int>st;
    int i=0, len=s.size();
    while(i<len){
        st.emplace(s[i]);
        i++;
    }
    i=0;
    while(!st.empty()){
        if (st.top() != s[i]){
            cout << "Given num is not an Palindrome." << "\n";
            break;
        }else if (st.top() == s[i]){
            st.pop(); i++;
        }
    }if (st.empty()){
        cout << "Given num is an Palindrome."<<"\n";
    }
}

void approach3(int n){
    int temp=n, reverseNum=0; // TC -> O(log N).. for reversing the number..
                           // SC -> O(1)..
    while(n){
        int lastDigit=n%10;
        reverseNum=reverseNum*10+lastDigit;
        n /= 10;
    }
    if (reverseNum == temp){
        cout << "Given Num is an Palindrome." << "\n";
    }else{
        cout << "Given Num is not an Palindrome." << "\n";
    }
}

int32_t main(){
    
    int n;
    cin >> n;

    approach1(n);
    approach2(n);
    approach3(n);

    return 0;
}