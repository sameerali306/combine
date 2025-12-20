#include<iostream>
using namespace std;
int main(){
    int GussedNumber=31;
    int number;
    int TotalAttempt=10;
    while (TotalAttempt>1)
    
    {
        cout<<"Enter Your Number :";
        cin>>number;
        if (number==GussedNumber)
        {
            cout<<"Congratulate 🎉👋👋👋Your Gussed is Right";
            break;
        }else{
            if (number>GussedNumber)
            {
                cout<<"Your number is greater than Gussed number"<<endl;
                cout<<"Your attempy left is ="<<TotalAttempt--<<endl;
            }else{
                cout<<"Your number is smaller than Gussed number"<<endl;
                cout<<"Your attempy left is ="<<TotalAttempt-- <<endl;
            }
            

        }
        cout<<"You have no more attempt  left 😐😐😐 you guassed number is :"<<GussedNumber<<endl;
    }
    
    
}

