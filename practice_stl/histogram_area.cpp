// https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


#include<bits/stdc++.h>
using namespace std;

vector<int>prevMin(vector<long long>arr) {
    int n = arr.size();
    vector<int>res(n, -1);
    stack<int>st;
    for(int i = 0; i < n; i++) {
        while(!st.empty() and arr[st.top()] > arr[i]) {
            st.pop();
        }

        if(!st.empty())
            res[i] = st.top();

        st.push(i);
    }

    return res;
}

vector<int>nextMin(vector<long long>&arr) {
    int n = arr.size();
    vector<int>res(n, n);
    stack<int>st;
    for(int i = 0; i < n; i++) {
        while(!st.empty() and arr[st.top()] > arr[i]) {
            res[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    return res;
}


class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    using ll = long long;
    long long getMaxArea(long long arr[], int n)
    {
        vector<ll>a;
        for(int i = 0; i < n; i++) a.push_back(arr[i]);

        vector<int>prev = prevMin(a);
        vector<int>next = nextMin(a);

        long long res = 0;
        for(int i = 0; i < n; i++) {
            res = max(res, (next[i] - prev[i] - 1) * arr[i]);
        }
        return res;
    }
};