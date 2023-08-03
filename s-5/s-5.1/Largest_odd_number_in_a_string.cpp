class Solution {
public:
    string largestOddNumber(string num) {
        string MaxInt="";
        int n=num.size(), maxEle=INT_MIN;
        for (int i=0;i<n;i++){ // TC -> O(N*2)..  SC -> 0(1)..
            string temp="";
            for (int j=i;j<n;j++){
                temp+=num[j];
                if (stoi(temp) % 2!=0){
                    maxEle=max(maxEle, stoi(temp));
                }
            }
        }
        if (maxEle!=INT_MIN){
            MaxInt=to_string(maxEle);
        }
        return MaxInt;
    }
};



class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        for (int i=n-1;i>=0;--i){ // TC -> 0(N)..   SC -> 0(1)..
            if (num[i]%2!=0){
                break;
            }else{
                num.pop_back();
            }
        }return num;
    }
};


class Solution {
public:
    string largestOddNumber(string num) {
        for (int i=num.size()-1;i>=0;--i){  // TC -> O(N).. SC -> O(1)..
            if (num[i]%2!=0){
                return num.substr(0,i+1);
            }
        }return "";
    }
};

int32_t main(){

    string str;
    getline(cin,str);

    return 0;
}