#include<bits/stdc++.h>
using namespace std;

int main() {

    // deque doubly ended queue
    // functions
    // deque.push_back(el)       push el in back of deque
    // deque.push_front(el)      push el in front of deque
    // deque.pop_back()          removes the last element of deque
    // deque.pop_front()         removes the front element of deque
    // deque.front()             returns the front element of deque
    // deque.back()              returns the back element of queue

    deque<int>dq;
    vector<int>elements = {1, 2, 3, 4, 5, 6};
    for(int i: elements)
        dq.push_back(i);

    cout << dq.front() << " " << dq.back() << "\n";  // your turn guess the output 🚀🚀

    dq.pop_back();

    cout << dq.front() << " " << dq.back() << "\n"; // your turn guess the output 🚀🚀

    dq.pop_front();

    cout << dq.front() << " " << dq.back() << "\n"; // your turn guess the output 🚀🚀

}