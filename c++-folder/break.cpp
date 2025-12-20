#include<iostream>
using namespace std;
int main(){
    int GussedNumber=10; 
    int Number;
    int TotalAttempt=10;
    int UserAttempt=1;
    while (TotalAttempt>1){
    cout<<"enter a number :";
    cin>>Number;
    {
        if (Number==GussedNumber)
        {
            cout<<"Cobgratulation Your Gussed is right";
            break;
        }else{
            cout<<"try again"<<endl;
            TotalAttempt--;
            cout<<"TotalAttempt is equal to :"<<TotalAttempt<<endl;
            UserAttempt++;
            cout<<"UserAttempt is equal to :"<<UserAttempt<<endl;

        }
        
    }}


    
    
} // namespace std
