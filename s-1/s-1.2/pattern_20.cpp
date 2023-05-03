#include<bits/stdc++.h>
using namespace std;

void call2pattern(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << "*";
        }for (int j=0; j<(2*n)-(2*i); j++){
            cout << " ";
        }for (int j=1; j<=i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for (int i=n-1; i>=1; i--){
        for (int j=0; j<i; j++){
            cout << "*";
        }for (int j=0; j<(2*n)-(2*i); j++){
            cout << " ";
        }for (int j=0; j<i; j++){
            cout << "*";
        }cout << "\n";
    }
}

int32_t main(){
    int n;
    cin >> n;
    
    call2pattern(n);
    return 0;
}

// ===================================
In this problem, we have to print a butterfly-like star pattern. 
This pattern is very similar to Pattern 10 in this series as here we can see that 
for Row 1 we have 2 stars, and 8 spaces, and for Row 2 we have 4 stars and 6 spaces, 
and so on. Also, after the nth row, the stars decrease and the spaces increase. So,
 the outer loop will run for 2*n -1 times ( n times when spaces > stars and then n-1
  when stars > spaces ). There will be 3 inner loops, one to print stars, then spaces,
   and then again stars. Spaces will decrement by 2 as i increases and when i reaches n,
    then spaces decrement by 2 every time we enter a new row. When i<n, the stars printed 
    in each row are 2*i, and as soon as i>n, the stars in each row would be twice of 2*n-i.

void pattern20(int n)
{   
      // initialising the spaces.
      int spaces = 2*n-2;
      
      // Outer loop for printing row.
      for(int i = 1;i<=2*n-1;i++){
          
          // stars for first half
          int stars = i;
          
          // stars for the second half.
          if(i>n) stars = 2*n - i;
          
          //for printing the stars
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
          //for printing the spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          //for printing the stars
          for(int j = 1;j<=stars;j++){
              cout<<"*";
          }
          
          // As soon as the stars for each iteration are printed, we move to the
          // next row and give a line break otherwise all stars
          // would get printed in 1 line.
          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }
      
}
