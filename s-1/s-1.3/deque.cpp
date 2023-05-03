#include<bits/stdc++.h>
using namespace std;

void exploring_deque(){
    deque<int>dq;   // double ended queue which is similiar to vector/list but which can insert/delete at front as well.
    dq.push_back(10);
    dq.emplace_back(20); //  TC -> O(1).. SC -> O(1)..
    
    dq.push_front(5);
    dq.emplace_front(-1);
    
    for (auto &x: dq){
        cout << x << " ";
    }cout << "\n";
    
    dq.pop_back();
    dq.pop_front();
    
    for (auto &x: dq){
        cout << x << " ";
    }
    
//  size(),  begin(), end(), rbegin(), ren(), back(), clear(), swap(), erase(),
// empty(), swap(), sort(), insert(), emplace(), front()
    // pop_back(), pop_front()
}

int32_t main(){
    exploring_deque();
    
    return 0;
}


/*
 
The time complexities for doing various operations on deques are-

    Accessing Elements- O(1)
    Insertion or removal of elements- O(N)
    Insertion or removal of elements at start or end- O(1)
*/ 