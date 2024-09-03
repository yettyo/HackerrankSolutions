#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<int>v; //creates an empty vector of integers
    int n;
    cin >> n;
    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int temp;
    for (int value : v) {
        cout << value << " ";
    }
    cout << endl;
    return 0;
}
