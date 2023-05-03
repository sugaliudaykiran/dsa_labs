#include<bits/stdc++.h>
using namespace std;

void call2pattern(int n){
    for (int i=1; i<=n; i++){
        for (int j=0; j<=n-i-1; j++){
            cout << " ";
        }
        for (int j=1; j<=i; j++){
            cout << char(64+j);
        }
        for (int j=i-1; j>=1; j--){
            cout << char(64+j);
        }
        for (int j=0; j<=n-i-1; j++){
            cout << " ";
        }cout << "\n";
    }
}

int32_t main(){
    int n;
    cin >> n;
    
    call2pattern(n);
    return 0;
}


// =========================
void pattern17(int N)
{
    
      // Outer loop for the number of rows.
      for(int i=0;i<N;i++){
          
          // for printing the spaces.
          for(int j=0;j<N-i-1;j++){
              cout<<" ";
          }
          
          // for printing the characters.
          char ch = 'A';
          int breakpoint = (2*i+1)/2;
          for(int j=1;j<=2*i+1;j++){
              
              cout<<ch;
              if(j <= breakpoint) ch++;
              else ch--;
          }
          
          // for printing the spaces again after characters.
          for(int j=0;j<N-i-1;j++){
              cout<<" ";
          }
          
          // As soon as the letters for each iteration are printed, we move to the
          // next row and give a line break otherwise all letters
          // would get printed in 1 line.
          cout<<endl;
          
      }
}