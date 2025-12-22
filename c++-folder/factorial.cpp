#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number :";
    cin>>number;
    int count=number;
    int factorial=1;
    while (count>1)
    {
        factorial *=count;
        count--;
        // number--;
    }
    cout<<"The factorial of number"<<number<<"is"<<factorial;
    
}