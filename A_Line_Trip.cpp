#include <bits/stdc++.h>
using namespace std;

// min volume of gas tank = maximum distance between two gas stations 
// input line m: no. of test cases
// input line 1: n (no. of gas stations), x (end point)
// input line 2: locations of gas stations 

// make an array: of the gas station locations and add the end point 
// iterate through array and find max distance between two consecutive elements
// compare with 2(difference between last and second last) and return the maximum 
// start array from 0.

class Solution{
    public:

    int solve(vector<int> stations){
        int maxi = 0;
        for(int i = 1; i < stations.size(); i++){
            int diff = stations[i] - stations[i-1];
            maxi = max(maxi, diff);
        }
        return max(maxi, 2 * (stations[stations.size()-1] - stations[stations.size()-2]));
    }
};

int main(){
    Solution sol;
    int tc;
    cin >> tc;
    for (int i = 0; i < tc; i++){
        int n;
        cin >> n;
        int x;
        cin >> x;
        vector<int> stations;
        stations.push_back(0);
        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            stations.push_back(temp);
        }
        stations.push_back(x);
        int a = sol.solve(stations);
        cout << a <<endl;

    }
    return 0;
}
