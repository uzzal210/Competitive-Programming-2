#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int n;
    cin >> n;
    set<string> unique_letters;
 
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        s.erase(unique(s.begin(), s.end()), s.end());
 
        unique_letters.insert(s);
    }
    cout << unique_letters.size() << endl;
 
    return 0;
}