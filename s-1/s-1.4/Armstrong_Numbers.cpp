#include<bits/stdc++.h>
using namespace std;

void isArmstrong(int n){  // TC -> O(N)..where N is length of digits.   AS -> O(1)..
    int originNum=n, temp=n, sumofDigit=0, sizeofDigit=0;
    
    while(n){
        sizeofDigit++;
        n/=10;
    }
    
    while(temp){
        int lastDigit=temp%10;
        sumofDigit+=pow(lastDigit, sizeofDigit);
        temp/=10;
    }
    
    if (sumofDigit == originNum){
        cout << "Yes, given num is an Armstrong." <<"\n";
    }else{
        cout << "Yes, given num is not an Armstrong." <<"\n";
    }
}

int32_t main(){
    
    int num;
    cin >> num;
    
    isArmstrong(num);
    return 0;
}