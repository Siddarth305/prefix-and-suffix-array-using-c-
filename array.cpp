#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n), prefix(n), suffix(n);

    // Input array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Compute prefix array
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // Compute suffix array
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    // Output prefix and suffix arrays
    cout << "Prefix Array: ";
    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }
    cout << endl;

    cout << "Suffix Array: ";
    for (int i = 0; i < n; i++) {
        cout << suffix[i] << " ";
    }
    cout << endl;

    return 0;
}
