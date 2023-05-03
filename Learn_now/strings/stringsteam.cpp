#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    vector<string> s;
    string str;
    getline(cin, str);
    
    stringstream ss(str); 
    // Use while loop to check the getline() function condition.  
    while (getline(ss, str, ',')) 
        // `str` is used to store the token string while ' ' whitespace is used as the delimiter.
        // cout << str << endl;
        s.emplace_back(str);
    
    sort(s.begin(), s.end());
    for(auto x: s){
        cout << x << "\n";
    }
    return 0;
}