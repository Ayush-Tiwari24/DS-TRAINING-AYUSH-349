#include<iostream>
using namespace std;

int main(){
    int n, arr[100],count=0;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<"Enter the elements of an array";
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
         if(arr[j]==i){     
              count++;
              break;
            }    
        }
        if(count==0){
            cout<<i ;
        }
        count=0;   
    }
    return 0;
}