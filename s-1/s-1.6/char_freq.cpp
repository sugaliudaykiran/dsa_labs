#include<bits/stdc++.h>
using namespace std;

int hashTable(int n, string str, char ch){
    int freq[26]={0};
    for (int i=0; i<n; i++){
        freq[str[i]-'a']+=1;  // for lower case characters
    }
    return freq[ch-'a'];
}

int hashTable2(int n, string str, char ch){
    int freq[256]={0};  // In case, to check for "all the existing character" 
    for (int i=0; i<n; i++){
        freq[str[i]]++;
    }
    return freq[ch];
}

int32_t main(){
    
    // hashing - pre storing && fetching..
    int n, quLen;
    string str;
    
    cin >> str;
    cin >> quLen;
    n=str.size();
    
    while (quLen--){
        char ch;
        cin >> ch;
        cout << "Frequency of "<< ch << ": "<< hashTable(n,str, ch) << "\n";
    } 
    return 0;
}