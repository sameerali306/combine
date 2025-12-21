#include<iostream>
using namespace std;
int main(){
    int number;
    int sum=0;
    while (true)
    {
        cout<<"Enter a number (0 to stop) :";
        cin>>number;
        
        if (number==0)
        {
           break;
        }
      sum +=number;
    }
    

     cout<<sum;
    

}