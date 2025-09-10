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

    int arr3[100], k = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                bool already = false;
                for (int x = 0; x < k; x++) {
                    if (arr3[x] == arr1[i]) {
                        already = true;
                        break;
                    }
                }
                if (!already) arr3[k++] = arr1[i];
            }
        }
    }

    cout << "Intersection set: ";
    for (int i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}

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

    int arr3[100], k = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                bool already = false;
                for (int x = 0; x < k; x++) {
                    if (arr3[x] == arr1[i]) {
                        already = true;
                        break;
                    }
                }
                if (!already) arr3[k++] = arr1[i];
            }
        }
    }

    cout << "Intersection set: ";
    for (int i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}
