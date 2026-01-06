#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows :";
    cin>>rows;
    int i=1;
    while (i<=rows)
    {
        int space=1;
        int j=1;
        while (space<=rows-i)
        {
           cout<<" ";
           space++;
        }
        while (j<=rows)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}