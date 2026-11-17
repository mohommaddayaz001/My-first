#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements in the arrays: ";
    cin >> n;

    int arr1[n], arr2[n], sumArr[n];

    cout << "Enter elements of the first array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of the second array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    // Adding corresponding elements
    for(int i = 0; i < n; i++) {
        sumArr[i] = arr1[i] + arr2[i];
    }

    cout << "Sum of the two arrays:\n";
    for(int i = 0; i < n; i++) {
        cout << sumArr[i] << " ";
    }
    cout << endl;

    return 0;
}
