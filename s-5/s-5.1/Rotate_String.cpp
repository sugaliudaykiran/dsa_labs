class Solution {
public:
    bool rotateString(string s, string g) {
        int n1=s.size(); // TC -> O(N^2)..
        int n2=g.size(); // SC -> O(N).. Using Extra space.

        if (n1!=n2){
            return false;
        }

        string check=s+s;
        return check.find(g)!=string::npos;
    }
};

// ===========================
class Solution {
private:
    bool rotateString(string A, string B, int rotation){
        int len = A.size(); // TC -> O(N^2)..   
        for (int i=0;i<len;i++){    //  SC -> O(1).. without extra space.
            if (A[i]!=B[(i+rotation)%len]){
                return false;
            }
        }return true;
    }
public:
    bool rotateString(string s, string g) {
        if (s.size()!=g.size()){
            return false;
        }
        if (s.size()==0){
            return true;
        }

        for (int i=0;i<s.size();i++){
            if (rotateString(s, g, i)){
                return true;
            }
        }return false;
    }
};