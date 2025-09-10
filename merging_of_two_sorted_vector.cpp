#include<bits/stdc++.h>
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
    int m;
    cout << "Enter the number of elements in the second vector: "<<endl;
    cin >> m;
    vector<int> arr2(m);
    cout << "Enter the elements of the second vector: "<<endl;
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    vector<int> merged(n + m);
    merge(arr.begin(), arr.end(), arr2.begin(), arr2.end(),merged.begin());
    cout << "Merged vector: ";
    for(int x : merged) {
        cout << x << " ";
    }
    // int i = 0, j = 0;
    // while(i < n && j < m) {
    //     if(arr[i] <= arr2[j]) {
    //         merged.push_back(arr[i]);
    //         i++;
    //     } else {
    //         merged.push_back(arr2[j]);
    //         j++;
    //     }
    // }
    // while(i < n) {
    //     merged.push_back(arr[i]);
    //     i++;
    // }
    // while(j < m) {
    //     merged.push_back(arr2[j]);
    //     j++;
    // }
    // cout << "Merged vector ";
    // for(int x : merged) {
    //     cout << x << " ";
    // }
    // cout << endl;
    return 0;
}