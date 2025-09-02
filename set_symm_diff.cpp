#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of first set: ";
    cin >> n1;
    int arr1[100];
    cout << "Enter elements of first set: ";
    for (int i = 0; i < n1; i++) cin >> arr1[i];

    cout << "Enter size of second set: ";
    cin >> n2;
    int arr2[100];
    cout << "Enter elements of second set: ";
    for (int i = 0; i < n2; i++) cin >> arr2[i];

    int arr3[200], k = 0;

    for (int i = 0; i < n1; i++) {
        bool found = false;
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = true;
                break;
            }
        }
        if (!found) arr3[k++] = arr1[i];
    }

    for (int i = 0; i < n2; i++) {
        bool found = false;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                found = true;
                break;
            }
        }
        if (!found) arr3[k++] = arr2[i];
    }

    cout << "Symmetric difference set: ";
    for (int i = 0; i < k; i++) cout << arr3[i] << " ";
    return 0;
}
