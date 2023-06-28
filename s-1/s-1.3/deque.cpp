#include<bits/stdc++.h>
using namespace std;
/*
 
The time complexities for doing various operations on deques are-

    Accessing Elements- O(1)
    Insertion or removal of elements- O(N)
    Insertion or removal of elements at start or end- O(1)
*/ 

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

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    
    deque<int>dq;
    // dq.assign(2, 10);
    // deque<int>dq(2, 10); // double ended std::queue<T> ;
    
    int n;
    cin >> n; // insertion at random position -> O(N).. 
    for (int i=0;i<n;i++){ // insertion at front and back -> O(1)..
        int x;   // accessing elements -> O(1)..
        cin >> x;
        // dq.push_back(x);
        // dq.push_front(x);
        // dq.emplace_back(x);
        dq.emplace_front(x);
        
    }
    
    for (auto &x: dq){
        cout << x << " ";
    }cout << "\n";
    
    deque<int>:: iterator it=dq.begin();
    dq.erase(it);
    cout << dq.front() << " " << dq.back() << "\n";
    cout << dq.size() <<" " << dq.empty() << "\n";
    dq.at(2) = 11;
    if (dq.size()>2){
        cout << dq.at(2) << "\n";
    }
        
    return 0;
}

*/ 