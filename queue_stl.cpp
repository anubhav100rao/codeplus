#include<bits/stdc++.h>
using namespace std;


int main() {

    // operations allowed
    // queue.push(el)             adds el in the back
    // queue.front()              returns element present at front of q
    // queue.pop()                removes first element of queue

    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);

    // this is also ok queue<int>q({1, 2, 3});

    cout << q.front() << "\n";

    q.pop();
    
    cout << q.front() << "\n"; 


    while(!q.empty()) {
        cout << q.front() << "\n";
        q.pop();
    }

    // note: we also have queue.back() function to get the last element of queue, but we use it rarely

    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.front() << " " << q.back() << "\n"; // can you guess the output 🚀🚀
}