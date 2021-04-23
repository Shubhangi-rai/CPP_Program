//Program to find maximum, minimum among two numbers.
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int Min,Max;
    if(n1>n2){
        Max=n1;
        Min=n2;
    }
    else{
        Max=n2;
        Min=n1;
    }
    cout<<"Maximum number: "<<Max<<endl;
    cout<<"Minimum number: "<<Min<<endl;

    return 0;
}