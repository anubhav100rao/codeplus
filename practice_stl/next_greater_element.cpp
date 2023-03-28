// https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        using ll = long long;
        stack<ll>st;
        vector<ll>res(n, -1);
        
        for(int i = 0; i < n; i++) {
            while(!st.empty() and arr[st.top()] < arr[i]) {
                int x = st.top(); st.pop();
                res[x] = arr[i];
            }
            st.push(i);
        }
        
        return res;
    }
};

