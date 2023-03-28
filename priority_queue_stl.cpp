#include<bits/stdc++.h>
using namespace std;

int main() {

    // priority queues are basically heaps(baad m aa jayega samajh agr abhi ni aa rha)
    // mainly of two types
    // max heap or max priority_queue
    // min heap or min priority_queue
    

    // default one is max priority queue

    // if the priority queue is of max type -> then it always maintain the max of elements is contains at top

    // functions
    // priority_queue.push(el)        push el in priority_queue O(logn)
    // priority_queue.top()           returns the top element of priority_queue O(1)
    // priority_queue.pop()           removes the top element of priority_queue O(logn)

    priority_queue<int>pq;
    
    vector<int>elements = {4, -1, 2, 8, 1, 3, 2};
    for(int i: elements)
        pq.push(i);

    // we can also do this priority_queue<int>pq(elements.begin(), elements.end());


    cout << pq.top() << "\n"; // your turn guess the output 🚀🚀

    pq.pop();

    cout << pq.top() << "\n"; // your turn guess the output 🚀🚀

    


    // --------- lets create min heap --------
    priority_queue<int, vector<int>, greater<int>>min_pq;

    for(int i: elements)
        min_pq.push(i);


    cout << min_pq.top() << "\n"; // your turn guess the output 🚀🚀

    min_pq.pop();

    cout << min_pq.top() << "\n"; //  your turn guess the output 🚀🚀   


}