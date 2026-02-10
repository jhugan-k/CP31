/*
    > difference is constant, so its will be equal to gcd by increasing or decreasing
    > d % a == d % b, idk why but it is
    > find d % a. steps = min(d%a, d - (d%a)) : left or right

*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc; 
    cin >> tc;
    for(int t = 0; t < tc; t++){
        long long a, b;
        cin >> a >> b;
        if(a == b){
            cout << 0 << " " << 0 << endl;
            continue;
        }
        
        long long d = abs(a - b);

        cout << d << " " << min((a % d),(d - (a % d))) << endl;


    }
}