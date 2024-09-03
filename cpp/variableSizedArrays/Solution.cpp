#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; int q; //n = numofarr q = numofquery
    cin >> n >> q;
    vector<int> vc[n];
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++) {
            int y;
            cin >> y;
            vc[i].push_back(y);
        }
    }
    for (int k = 0; k < q; k++) {
        int a; int b;
        cin >> a >> b;
        int c = vc[a][b];
        cout << c << "\n";
    }
    cout << endl;
    return 0;
}
