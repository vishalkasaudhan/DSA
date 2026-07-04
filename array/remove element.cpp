#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter element to remove: ";
    cin >> x;

    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        cout << "Element not found!";
    } else {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;

        cout << "Array after removing element: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    return 0;
}