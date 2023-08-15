class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp, mp2;
        if (s.size()!=t.size()){
            return false; // TC -> O(|s|+|t|)
        } 
        for (int i=0;i<s.size();i++){  // SC -> O(No of diff character)
            if (mp[s[i]] && mp[s[i]]!=t[i]){
                return false;
            }if (mp2[t[i]] && mp2[t[i]]!=s[i]){
                return false;
            }
            mp[s[i]]=t[i];
            mp2[t[i]]=s[i];
        }return true;
    }
};
