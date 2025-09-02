#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n,ele;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be found"<<endl;
    cin>>ele;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cout<<"element found at index:"<<i;
            break;
        }
        cout<<"not found"<<endl;
    }
    
    return 0;
}