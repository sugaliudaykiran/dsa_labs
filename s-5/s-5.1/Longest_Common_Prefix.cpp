#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string lcp2(string &s1, string &s2){
        string res=""; // comparing the least length string and storing the common charcter.
        int len=min(s1.size(), s2.size());
        for (int i=0;i<len;i++){
            if (s1[i]!=s2[i]){  // TC -> O(N*Length(least common prefix string))
                break;   // SC -> O(1)..
            }res+=s1[i];
        }return res;
    }

    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size(); // LCP(s1,s2,s3) = LCP(LCP(s1, s2),s3);
        string ans=strs[0];
        for (int i=1;i<n;i++){
            ans=lcp2(strs[i], ans);
        }return ans;
    }
};

int32_t main(){
    int n;
    cin >> n;
    vector<string> strs(n);

    for (int i=0;i<n;i++){
        cin >> strs[i];
    }

    cout << longestCommonPrefix(strs) << "\n";

}