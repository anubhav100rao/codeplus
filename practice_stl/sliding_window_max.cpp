// https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article
// https://leetcode.com/problems/sliding-window-maximum/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        deque<int>q;
        vector<int>res;
        for(int left = 0, right = 0; right < n; right++) {
            while(!q.empty() and q.back() < arr[right]) q.pop_back();
            q.push_back(arr[right]);
            
            if(right - left + 1 == k) {
                res.push_back(q.front());
                if(arr[left++] == q.front()) q.pop_front();
            }
        }
        return res;
    }
};