#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"enter number of rows :";
    cin>>rows;
    int i=1;
    while (i<=rows)
    {
        if (i<rows-4)
        {
            int j=1;
            while (j<=rows-2)
            {
                cout<<"*";
                j++;
            }
            
        }
        else
        {
           int space=1;
           while (space<=rows-i)
           {
            cout<<" ";
            space++;
           }
           int j=1;
           while (j<=(i*4)-1)
           {
            cout<<"*";
            j++;
           }
           
           
        }
        cout<<endl;
        i++;
        
    }

   int k=i
   while (k)
   {
    /* code */
   }
   
    
} // namespace std;
