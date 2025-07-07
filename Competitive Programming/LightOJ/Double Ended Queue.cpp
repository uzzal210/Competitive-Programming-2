#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int t;
    cin >> t;
    for (int case_num = 1; case_num <= t; ++case_num) {
        int n, m;
        cin >> n >> m;
        deque<int> dq;

        cout << "Case " << case_num << ":\n";

        for (int i = 0; i < m; ++i) {
            string command;
            cin >> command;

            if (command == "pushLeft" || command == "pushRight") {
                int x;
                cin >> x;

                if ((int)dq.size() < n) {
                    if (command == "pushLeft") {
                        dq.push_front(x);
                        cout << "Pushed in left: " << x <<"\n";
                    } else {
                        dq.push_back(x);
                        cout << "Pushed in right: " << x <<"\n";
                    }
                } else {
                    cout << "The queue is full\n";
                }
            }

            else if (command == "popLeft") {
                if (!dq.empty()) {
                    int val = dq.front();
                    dq.pop_front();
                    cout << "Popped from left: " << val << "\n";
                } else {
                    cout << "The queue is empty\n";
                }
            }

            else if (command == "popRight") {
                if (!dq.empty()) {
                    int val = dq.back();
                    dq.pop_back();
                    cout << "Popped from right: " << val << "\n";
                } else {
                    cout << "The queue is empty\n";
                }
            }
        }
    }

    return 0;
}
