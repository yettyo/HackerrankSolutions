#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    set<int> s;
    int a, b;
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        switch (a) {
        case 1:
            s.insert(b);
            break;
        case 2:
            s.erase(b);
            break;
        default:
            auto pos = s.find(b);
            if (pos != s.end()) {
                cout << "Yes\n";
            }
            else cout << "No\n";
            break;
        }
    }
    cout << endl;

    return 0;
}



