#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int>v;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    int q1, q2, q3;
    cin >> q1 >> q2 >> q3;
    v.erase(v.begin() + (q1 - 1));
    v.erase(v.begin() + (q2 - 1), v.begin() + (q3 - 1));
    cout << v.size() << "\n";
    for (int val : v) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
