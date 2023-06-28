#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/pair-in-cpp-stl/
void exploring_pair(){
    // utility library..
    pair<int, int> p1; 
    p1.first = 10;
    p1.second = 2000;
    
    cout << p1.first << " " << p1.second <<"\n";
    
    pair<char, int> p2('a', int('a'));
    cout << p2.first << " " << p2.second << "\n";
    
    pair<int, pair<float, string>> p3;
    p3={1, {10.1, "ten"}};
    cout << p3.first << " " << p3.second.first << " " << p3.second.second << "\n";
    
    pair g1(1, 1.1);
    cout << g1.first << " " << g1.second << "\n";
    
    pair g2 = make_pair(11, 2.0);
    cout << g2.first << " " << g2.second << "\n";
    
    g2.swap(g1);
    cout << g2.first << " " << g2.second << "\n";
    
    if (g2.first > g1.first){
        cout << "yes";
    }else{
        cout << "no";
    } cout << "\n";
    
    pair<int, int>ar[] = {{1, 10}, {2, 20}, {3, 30}}; // pair of int Array
    int n = sizeof(ar)/sizeof(ar[0]);
    
    for (int i=0; i<n; i++){
        cout << ar[i].first << " " << ar[i].second << "\n";
    }
}

int32_t main(){
    exploring_pair();
    
    return 0;
}

/*
        Time complexity: O(1).
        Auxiliary space: O(1).
*/ 

/*
#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    // pair<int, int>p1;
    // pair<int,int>p1(1,20);
    
    // p1 = make_pair(1, 20);
    
    pair p1(1, 10);
    pair p2(2, 20);
    if (p2.second == p1.second){
        if (p1.first > p2.first){
            cout << "p1 is success one.." << "\n";
        }else{
            cout << "p2 is success one.." << "\n";
        }
    }else{
        cout << "p1 and p2 are not equal.." << "\n";
    }
    // p1.first=1, p1.second=20;

    // cout << p1.first << " " << p1.second << "\n";
    
    // int x,y;
    // tie(x,y) = p1;  // to unpack the tuple values into separate variables.
    // cout << x << " " << y << "\n";
    return 0;
}

*/ 

