#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Found atthe key at the index i
        }
    }
    return -1; // Not found in the array
}

int main() {
    int n, key;
    cout << "Enter number of elements";
    cin >> n;

    int arr[n];
    cout << "Enter the  elements in array ::";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search in the array (key): ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if (result != -1)
        cout << "key found at index " << result << endl;
    else
        cout << "key not found in array" << endl;

    return 0;
}
