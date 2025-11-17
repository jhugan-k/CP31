#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void solve(){

    }
};

/*
    > number of +1 >= number of -1
    > number of -1 == even.

    > count number of 1 and number of -1 from input 
    > while( both conditions unsatisfied), convert a -1 to a +1
    > stop when satisfied and return count

*/

int main(){
    Solution sol;
    int tc;
    cin >> tc;

    for(int i = 0; i < tc; i++){
        int one = 0;
        int minusone = 0;
        int count = 0;
        int n;
        cin >> n;
        for(int j = 0; j < n; j++){
            int x;
            cin >> x;
            if(x == 1) one++;
            else minusone++;
        }
        while(one < minusone || minusone % 2 == 1){
            //do operation
            one++;
            minusone--;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}