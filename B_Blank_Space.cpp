#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int n;
        cin >> n;
        int counter = 0;
        int maxi = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            if(x == 0){
                counter++;
                maxi = max(maxi, counter);
            }
            else counter = 0;
        }
        cout << maxi << endl;
    }

    return 0;
}