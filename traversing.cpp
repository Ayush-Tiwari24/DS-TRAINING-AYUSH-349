#include<iostream>
using namespace std;

int main(){
    int n, arr[100];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i]; //input of elements
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    };
    return 0;
}