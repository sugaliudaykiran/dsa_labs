#include<bits/stdc++.h>
using namespace std;

void call2pattern(int n){
    for (int i=0; i<n; i++){
        for (int j=i; j>=0; j--){
            cout << char(64+(n-j)) << " ";
        }
        cout << "\n";
    }
}

int32_t main(){
    int n;
    cin >> n;
    
    call2pattern(n);
    return 0;
}

// =================

void pattern18(int N)
{
      // Outer loop for the no. of rows.
      for(int i=0;i<N;i++){
          
          // Inner loop for printing the alphabets from
          // A + N -1 -i (i is row no.) to A + N -1 ( E in this case).
          for(char ch =('A'+N-1)-i;ch<=('A'+N-1);ch++){
              
              cout<<ch<<" ";
          }
          
          // As soon as the letters for each iteration are printed, we move to the
          // next row and give a line break otherwise all letters
          // would get printed in 1 line.
          cout<<endl;
      }
}