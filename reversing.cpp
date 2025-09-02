//reversing an array

#include<iostream>
using namespace std;

int main(){
    int arr[60],n,temp[60];
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int m=n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        temp[i]=arr[m-1];
        m--;
    }
    for(int i=0;i<n;i++){
        cout<<temp[i]<<" ";
    }
    return 0;
}
