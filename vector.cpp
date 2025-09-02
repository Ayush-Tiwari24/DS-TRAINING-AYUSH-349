#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    cout<<"Size of vector l:"<<v.size()<<endl;
    cout<<"Capacity of vector l:"<<v.capacity()<<endl;
    
    v.push_back(0);
    cout<<"Size of vector l:"<<v.size()<<endl;
    cout<<"Capacity of vector l:"<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Size of vector l:"<<v.size()<<endl;
    cout<<"Capacity of vector l:"<<v.capacity()<<endl;

    v.push_back(6);
    cout<<"Size of vector l:"<<v.size()<<endl;
    cout<<"Capacity of vector l:"<<v.capacity()<<endl;

    v.push_back(8);
    cout<<"Size of vector l:"<<v.size()<<endl;
    cout<<"Capacity of vector l:"<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++){
        // cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
    for(auto value:v){
       cout<<value <<" ";
    }
    cout<<endl;
    v.pop_back();
    for(auto value:v){
        cout<<value<<" ";
    }
    cout<<endl;
    cout<<"Front:"<<v.front()<<" "<<"Last value:"<<v.back()<<endl;

    v.insert(v.begin(),2);
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    cout<<"Size of vector i:"<<v.size()<<endl;
    cout<<"Capacity of vector i:"<<v.capacity()<<endl;
    
    v.insert(v.begin()+4,3,11);
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    v.erase(v.begin(),v.begin()+2);
    for(auto value:v)
    cout<<value<<" ";

    vector<int>vl={2,5,7,8,9,10};
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;
    vector<int>v2(3,5);
    for(auto value:v)
    cout<<value<<" ";
    cout<<endl;

    vector<int>::iterator it;
    for(auto itr=v.begin();itr!=v.end();itr++)
    cout<<*it<<" ";
    return 0;
}