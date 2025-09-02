#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
  int buffer[max];
    for(int i=0;i<=max;i++){
        buffer[i]=0;
    }

    for(int i=0;i<=max;i++){
        buffer[arr[i]]++;
    }

    for(int i=0;i<=max;i++){
            cout << "the count of " << i << " is " << buffer[i] << endl;
    }
}
