#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    // Complete this function
    stringstream ss(str);
    char ch;
    vector<int> ans;
    int num;
    while (ss >> num) {
        ans.push_back(num);
        ss >> ch; //read and discard commas
    }
    return ans;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
