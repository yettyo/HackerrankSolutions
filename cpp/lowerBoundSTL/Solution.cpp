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
    int q;
    cin >> q;
    int r;
    vector<int>::iterator lowb;
    for (int j = 0; j < q; j++) {
        cin >> r;
        lowb = lower_bound(v.begin(), v.end(), r);
        if (v[lowb - v.begin()] == r) {
            cout << "Yes " << (lowb - v.begin() + 1) << endl;
        }
        else {
            cout << "No " << (lowb - v.begin() + 1) << endl;
        }
    }
    return 0;
}
