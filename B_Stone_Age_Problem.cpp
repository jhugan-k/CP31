#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<long long> arr(n);
    vector<int> last(n, 0);

    long long sum = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    long long global_val = 0;
    int last_global = 0;
    int timer = 1;

    while(q--){
        int x; cin >> x;

        if(x == 1){
            int i; long long num;
            cin >> i >> num;
            i--;

            long long old;
            if(last[i] < last_global){
                old = global_val;
            } else {
                old = arr[i];
            }

            sum += (num - old);
            arr[i] = num;
            last[i] = timer;
        }
        else{
            long long num; cin >> num;
            global_val = num;
            last_global = timer;
            sum = 1LL * n * num;
        }

        timer++;
        cout << sum << '\n';
    }
}