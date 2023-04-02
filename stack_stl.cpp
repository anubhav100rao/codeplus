#include<bits/stdc++.h>
using namespace std;

int main() {

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);

    // we can also do something like this: stack<int>st({1, 2, 3});

    cout << st.top() << "\n"; // "3" this gives the top element element of stack

    st.pop(); // this removes the top element of stack

    cout << st.top() << "\n"; // "2"


    while(!st.empty()) {
        cout << st.top() << "\n";
        st.pop();
    }

    // stack do not provide iterators, so we need to iterate over stack elements,
    // we first need to push them in some vector

    
}