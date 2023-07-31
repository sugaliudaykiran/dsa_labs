#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s) {
    int current_cnt=0, res=0;
    int n=s.size();
    for (int i=0;i<n;++i){ //  TC -> O(N)..     SC -> O(1)..
        if (s[i]=='('){
            current_cnt++;
        }else if (s[i]==')'){
            current_cnt--;
        }res=max(res, current_cnt);
    }return res;
}


int32_t main(){
    
    string str="(3*(4*(5*(6))))";
    // getline(cin,str);
    
    cout << maxDepth(str) << "\n";
    
    return 0;
}