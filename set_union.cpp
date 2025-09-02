#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[100];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[100];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) cin >> arr2[i];

    int arr3[200], k = 0;

    // copy arr1
    for (int i = 0; i < n1; i++) {
        arr3[k++] = arr1[i];
    }

    // add arr2 if not present in arr1
    for (int j = 0; j < n2; j++) {
        int found = 0;
        for (int i = 0; i < n1; i++) {
            if (arr2[j] == arr1[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            arr3[k++] = arr2[j];
        }
    }

    cout << "Union set: ";
    for (int i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}
