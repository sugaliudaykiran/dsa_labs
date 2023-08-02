#include<bits/stdc++.h>
using namespace std;

/*

string reverseString(string &s){
	s+=" ";
    stack<string> st;  // TC -> O(N)..  SC -> O(N)..
    int i;
    string str="";
    for(i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            st.push(str);
            str="";
        }else str+=s[i];
    }
    string ans="";
    while(st.size()!=1)
    {
        ans+=st.top()+" ";
        st.pop();
    }
    ans+=st.top();
	return ans;
}

*/

string reverseString(string &str){
    int n=str.size();
    int left=0, right=n-1;  // TC -> O(N)..     SC -> O(1)..
    string temp="", ans="";
    
    while(left<=right){
        char ch=str[left];
        if (ch!=' '){
            temp+=ch;
        }else if (ch == ' '){
            if (ans!=""){
                ans=temp+" "+ans;
            }else{
                ans=temp;
            }temp="";
        }left++;
    }
    if (temp!=""){
        if (ans!=""){
            ans = temp+" "+ans;
        }else{
            ans=temp;
        }
    }
    return ans;
}

int32_t main(){

    string str;
    getline(cin, str);

    cout << reverseString(str) << "\n";
    return 0;
}