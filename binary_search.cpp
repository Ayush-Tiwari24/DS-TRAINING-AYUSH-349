#include<iostream>
using namespace std;

int main(){
    int arr[100],n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0,end=n-1,mid,target;
    cout<<"Enter the target"<<endl;
    cin>>target;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            cout<<"element "<<arr[mid]<<" found at "<<mid;
            break;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else
        end=mid-1;
    }
    return 0;
}