#include<iostream>
using namespace std;

int main(){
    int arr[100],ele,n,pos;
    cin>>n;
    cout<<"insert the elements in an array"<<endl;
    for(int i=0;i<n;i++){

        cin>>arr[i]; //input of elements
    }cout<<"enter element to delete"<<endl;

    cin>>ele;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            pos=i;
            
        
            for(int j=pos;j<n-1;j++){
                 arr[j]=arr[j+1];
                
            }
            
            break;
        }
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}