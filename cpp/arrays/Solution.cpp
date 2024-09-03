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
    int arr[n]; //scan n

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        //scanf("%d", &arr[i]); //scan the array with n elements
    }

    for (int j = n - 1; j >= 0; j--) {
        cout << arr[j] << " ";
        //printf("%d ", arr[j]);
    }
    cout << endl;
    return 0;
}
