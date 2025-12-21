// #include<iostream>
// using namespace std;
// int main(){
//     int number;
//     int count1=0;
//     int count2=0;
//     int count=0;
//     while (count<5)
//     {
//         cout<<"Enter a number :";
//         cin>>number;
//         if (number%2==0)
//         {
//             count1=count1+1;
//             count++;
//         }else
//         {
//           count2=count2+1;
//           count++;
//         }
        
        
//     }
//     cout<<"the Even number are :"<<count1<<endl;
//   cout<<"the odd number are :"<<count2<<endl;
    
    
// } // namespace std;

#include<iostream>
using namespace std;
int main(){
    int number;
    int PostiveSum=0;
    int NegativeSum=0;
    int countZero=0;
    int count=0;
    while(count<5){
        cout<<"Enter a number :";
        cin>>number;
        if (number==0){
            countZero +=1;

        }
        {
            /* code */
        }
        
        if(number>0){
            PostiveSum +=number;
            count++;
        }else{
            NegativeSum +=number;
            count++;
        }
    }
    cout<<"The Postive number :"<<PostiveSum<<endl;
    cout<<"The negative number :"<<NegativeSum<<endl;
    cout<<"The  number of zero :"<<countZero<<endl;
}
