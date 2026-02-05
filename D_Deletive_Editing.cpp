/*
    > count how many of each letter is needed for the string. using hash map
    > start from right to left, whenver encountering a 'needed' letter, put it into a temp string and reduce hashmap count
    > reverse the string and see if its matching (For order)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int t = 0; t < tc; t++){
        string s;
        cin >> s;
        string need;
        cin >> need;
        unordered_map<char,int> mpp;
        string temp;
        for(auto c : need) mpp[c]++;
        for(int i = s.size() - 1; i >= 0; i--){
            if(mpp[s[i]] != 0){
                temp += s[i];
                mpp[s[i]]--;
            }
        }
        reverse(temp.begin(), temp.end());
        if(temp == need) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}