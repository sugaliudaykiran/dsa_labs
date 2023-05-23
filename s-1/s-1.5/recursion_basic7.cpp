#include<bits/stdc++.h>
using namespace std;

void Fibonacci_Number_1(int n){
    if (n == 0){    // TC -> O(n).. SC -> O(1)..
        cout << n << " ";
        return;
    }if (n == 1){
        cout << n-1 << " " << n << " ";
        return;
    }
    int last=0, slast=1;
    cout << last << " " << slast << " ";
    for (int i=2; i<=n; i++){
        int temp = last+slast;
        cout << temp << " ";
        last=slast;
        slast=temp;
    }
}

int Fibonacci_Number_2(int n){
    if (n<=1){    // TC -> O(N^2).. SC -> O(1)..
        return n;
    }
    
    int last=Fibonacci_Number_2(n-1);
    int slast=Fibonacci_Number_2(n-2);
    
    return last+slast;
}

int32_t main()
{
    int n;
    cin >> n;
    
    Fibonacci_Number_1(n);
    cout << Fibonacci_Number_2(n) << "\n";
    return 0;
}

/*
Approach:

    Similar to all the recursion problems we’ve seen before, we need a base case in this problem too in order for recursion to not go infinitely. Here, we notice that the Fibonacci series start from N = 1, where we initialize its value as 1. 
    Assume Fibonacci(0) = 0. So, Fibonacci(2) = 1+0 = 1 as the Nth Fibonacci number is the sum of the previous two Fibonacci numbers.
    Similarly, we call Fibonacci(N-1) and Fibonacci(N-2) and return their sum. Both the function calls Fibonacci(N-1) and Fibonacci(N-2) would be computed individually one by one until the base condition is reached for both and then they return back to the main function.

*/