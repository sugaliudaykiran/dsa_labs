class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()){
            return false;  // TC -> O(NlogN)..
        }                   //  SC -> O(1)..
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        for (int i=0;i<s.size();i++){
            if (s[i]!=t[i]){
                return false;
            }
        }return true;
    }
};

/////////====================
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq(26,0); // TC -> O(N)..  SC -> O(1)..
        // int freq[26] = {0};
        int n1=s.size(), n2=t.size();

        if (n1 != n2){
            return false;
        }if (n1==0){
            return true;
        }
        for (int i=0;i<n1;i++){
            freq[s[i]-'a']++;
        }for (int i=0;i<n2;i++){
            if (freq[t[i]-'a']>0){
                freq[t[i]-'a']--;
            }
        }for (int i=0;i<26;i++){
            if (freq[i]!=0){
                return false;
            }
        }return true;
    }
};