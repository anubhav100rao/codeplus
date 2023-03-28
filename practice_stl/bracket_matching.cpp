// https://leetcode.com/problems/valid-parentheses/

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isValid(string s) {
        stack<char>st;      
        for(char ch: s) {
            if(ch == '{' || ch == '(' || ch == '[') st.push(ch);
            else {
                if(st.size() == 0) return false;
                if((ch == ')' and st.top() == '(') || (ch == '}' and st.top() == '{') || (ch == ']' and st.top() == '['))
                    st.pop();
                else return false;
            } 
        }
        
        return st.size() == 0;
    }   
};