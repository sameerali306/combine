#include<iostream>
using namespace std;
int main(){
   int number;
   cout<<"Enter your Number to find table :";
   cin>>number;
   int count=1;
   while (count<=10)
   {
    cout << number << " x " << count << " = " << number * count << endl;
    count++;
   }
}