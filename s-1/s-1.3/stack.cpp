#include<bits/stdc++.h>
using namespace std;
/*
    TC => O(1)..push/pop.. SC -> O(N)..
std::stack<T, container> my_stack (container_instance);

    T is the datatype of elements in the stack like int, float
    container is the data structure used to initialize your stack. This is optionally and by default, it will be deque<T> and can be set to other values like vector<T>.
    container_instance is the instance of container type

By default, std::stack uses std::deque as underlying container. But we can specify to use std::vector or std::list also.

*/ 
void exploring_stack(){
    stack<int>st; // LIFO
    for (int i=0; i<5; i++){
        int x;
        cin >> x;
        // st.push(x);
        st.emplace(x);
    }
    
    cout << st.top() << " ";
    st.pop();
    cout << st.top() << "\n";
     
    while(st.size() != 0 || !st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    
    vector<int>v(4, 10);
    vector<int>v2(3, -1);
    
    deque<int>dq(3, 2);
    
    stack<int, vector<int>>s1(v);
    stack<int, vector<int>>s2(v2);
    // stack<int, deque<int>>s2(dq);  or   
    stack<int>s3(dq);
    
    s2.swap(s1); 
    while(!s2.empty()){
        cout << s2.top() << " ";
        s2.pop();
    }
//  empty(), size()
}//  std::stack<int, vector<int>> first;  

int32_t main(){
    
    exploring_stack();
    
    return 0;
}


/*

std::stack<T, container> my_stack (container_instance);

    T is the datatype of elements in the stack like int, float
    container is the data structure used to initialize your stack. This is optionally and by default, it will be deque<T> and can be set to other values like vector<T>.
    container_instance is the instance of container type

By default, std::stack uses std::deque as underlying container. But we can specify to use std::vector or std::list also.

*/ 

/*

#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    
    stack<int>st;  // LIFO  --> TC => O(1)..push/pop.. SC -> O(N).. 
    int n;
    cin >> n;
    
    while(n--){
        int x;
        cin >> x;
        // st.push(x);
        st.emplace(x);
    }
      
    stack <int> st2({11, 22, 33, 44, 55});
    // st2.swap(st);
    while(!st.empty() or st.size()!=0){
        cout << st.top() << " ";
        st.pop();
    }cout << "\n";
    
    // cout << st2.top() << "\n";
    while(!st.empty() or st2.size()!=0){
        cout << st2.top() << " ";
        st2.pop();
    }
    
    return 0;
}

*/