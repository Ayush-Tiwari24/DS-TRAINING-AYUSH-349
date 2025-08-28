#include<iostream>
using namespace std;

int main(){
    int n, arr[100],ele,pos;
    cin>>n;
    cout<<"insert the elements in an array"<<endl;
    for(int i=0;i<n;i++){

        cin>>arr[i]; //input of elements
    }cout<<"enter element to insert"<<endl;

    cin>>ele;
    
    for(int i=0;i<n;i++){
        if(ele>arr[i]){
        pos=i;
    }  
    }
    for(int i=n;i>pos;i--){
            arr[i]=arr[i-1];
        }
    
        arr[pos+1]=ele;
        n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}