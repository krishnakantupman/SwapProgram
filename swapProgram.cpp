#include<iostream>
using namespace std;
int main(){
    int num1,num2,temp;
    num1 = 5;
    num2 = 7;
    cout<<"Before Swapping"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    //using third variable
    // temp = num1;
    // num1 = num2;
    // num2 = temp;

    //using without third variable

    num1 = num1 + num2; //num1 = 12;
    num2 = num1 - num2; //num2 = 5;
    num1 = num1 - num2; //num1 = 7;
    cout<<"After Swapping"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;

}