#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100], buffer[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        buffer[i] = -1;
    }

    for (int i = 0; i < n; i++) {
        if (buffer[i] != 0) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    buffer[j] = 0;
                }
            }
            buffer[i] = count;
        }
    }

    cout << "\nRepeated elements:\n";
    for (int i = 0; i < n; i++) {
        if (buffer[i] > 1) {
            cout << arr[i] << " count: " << buffer[i] <<endl;
        }
    }

    cout << "\nNon repeated elements:\n";
    for (int i = 0; i < n; i++) {
        if (buffer[i] == 1) {
            cout << arr[i] << "\n";
        }
    }

    return 0;
}
