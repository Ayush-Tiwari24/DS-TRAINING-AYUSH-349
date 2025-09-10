#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the vector: "<<endl;
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the vector: "<<endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target element to search: "<<endl;
    cin >> target;
    binary_search(arr.begin(), arr.end(), target);
    if (binary_search(arr.begin(), arr.end(), target)) {
        cout << "Element " << target << " found in the vector." << endl;
    } else {
        cout << "Element " << target << " not found in the vector." << endl;
    }
    return 0;
}