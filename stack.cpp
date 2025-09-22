#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(10);
    s.push(12);
    s.push(14);
    cout<<"Top element: "<<s.top()<<endl;
    return 0;
}

int priority(char ch){
    if(ch=='(')
        return 0;
    if(ch=='+'||ch=='-')
        return 1;
    if(ch=='*'||ch=='/')
        return 2;
    if(ch=='^')
        return 3;
    return 0;
}
