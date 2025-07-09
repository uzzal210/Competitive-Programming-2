#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    int socks[2 * 100000];
    for (int i = 0; i < 2*n; i++) {
        cin >> socks[i];
    }
 
    bool table[100001] = {false};
    int crnt = 0, max_on_table = 0;
 
    for (int i = 0; i < 2*n ; i++) {
        int sock = socks[i];
        if (!table[sock]) {
            table[sock] = true;
            crnt++;
            if (crnt > max_on_table) {
                max_on_table = crnt;
            }
        } else {
            table[sock] = false;
            crnt--;
        }
    }
 
    cout << max_on_table << endl;
 
    return 0;
}