#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int mini = 1e9;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        mini = min(mini, abs(x));
    }
    cout << mini;
    return 0;

}