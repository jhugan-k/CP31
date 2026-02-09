/*
    > if last character and first character is same, do nothing
    ---> if ab occours and string ends in a, ba must occour. for every entry there is an exit 
    > if last character and first character is not same, change one
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;
    for(int t = 0; t < tc; t++){
        string s;
        cin >> s;
        if(s[0] == s[s.size()-1]){
            cout << s << endl;
            continue;
        }
        else{
            if(s[0] == 'a') s[0] = 'b';
            else s[0] = 'a'; 
            cout << s << endl;
        }
    }
}