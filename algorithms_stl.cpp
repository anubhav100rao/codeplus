#include<bits/stdc++.h>
using namespace std;

bool comp_reverse(int a, int b) {
    return a > b;
}

int main() {

    // https://en.cppreference.com/w/cpp/algorithm

    vector<int>arr = {7, 1, 4, 0, -1, 1};
    sort(arr.begin(), arr.end());
    sort(arr.begin(), arr.end(), comp_reverse);
    

    reverse(arr.begin(), arr.end());

    int mx_element = *max_element(arr.begin(), arr.end());
    int mn_element = *min_element(arr.begin(), arr.end());

    int sum = accumulate(arr.begin(), arr.end(), 0);


    int fre_1 = count(arr.begin(), arr.end(), 1);
    int first_occurence_4 = find(arr.begin(), arr.end(), 4) - arr.begin();


    // these are much much important
    // you will appreciate these functions when we teach you binary search on answer

    sort(arr.begin(), arr.end());

    auto l = lower_bound(arr.begin(), arr.end(), 1);
    auto r = upper_bound(arr.begin(), arr.end(), 1);

    bool exist_1 = binary_search(arr.begin(), arr.end(), -1);

    // ....


    arr.erase(arr.begin()); // removes -1
    arr.erase(arr.begin() + 1); // removes 1

    arr.push_back(-1); arr.push_back(1);

    


}