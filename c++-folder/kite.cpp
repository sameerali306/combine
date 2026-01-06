#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter a number of rows :";
    cin >>rows;
    int i=1;
    while (i<=rows)
    {
        int space=1;
        int j=1;
        while(space<=rows-i){
            cout<<" ";
            space++;
        }
        while (j<=2*i-1)
        {
            cout<<" * ";
           j++;
        }
        while(space<=rows-i){
            cout<<" ";
            space++;
        }
        cout<<endl;
        i++;
    }
    
    int tail=rows-1;
    while (tail>=1)
    {
        int s=1;
        while (s<=rows-tail)
        {
             cout << " ";
             s++;
        }
        int j=1;
        while (j<=2*tail-1)
        {
            cout<<" * ";
           j++;
        }
        cout << endl;
        
        tail--;
    }
    
     
    
    
} // namespace std;
