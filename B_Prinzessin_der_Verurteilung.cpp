/*
    > brute force check for 3-character strings


*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long tc;
    cin >> tc;
    while(tc--){
        int n; cin >> n;
        string s; cin >> s;
        // generate all substrings in s and put in set
        set<string>st;
        bool found = 0;
        for(int i = 0; i < n; i++){
            st.insert(s.substr(i,1));
            if(i+1 < n) st.insert(s.substr(i,2));
            if(i+2 < n) st.insert(s.substr(i,3));
        }

        //check all 1-char
        for(char a = 'a'; a <= 'z'; a++){
            string t = "";
            t += a;
            if(!st.count(t)){
                cout << t << endl;
                found = 1;
                break;
            }
        }

        //check all 2-char
        for(char a = 'a'; a <= 'z'; a++){
            if(found) break;
            for(char b = 'a'; b <= 'z'; b++){
                if(found) break;
                string t = "";
                t += a;
                t += b;
                if(!st.count(t)){
                    cout << t << endl;
                    found = 1;
                    break;
                }
            }
        }
        //check all 3-char
        for(char a = 'a'; a <= 'z'; a++){
            if(found) break;
            for(char b = 'a'; b <= 'z'; b++){
                if(found) break;
                for(char c = 'a'; c <= 'z'; c++){
                    if(found) break;    
                    string t = "";
                    t += a;
                    t += b;
                    t += c;
                    if(!st.count(t)){
                        cout << t << endl;
                        found = 1;
                        break;
                    }
                }
            }
        }
    }
    
}
