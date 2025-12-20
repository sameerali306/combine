// #include<iostream>
// using namespace std;

// int main() {
//     int number = 1;
//     while (number <= 20) {
//         if (number == 5) {
//             number++;  // Skip 5
//             continue;  //the continue immidetely jump to the top in condition by skipping all other code
//         }
//         cout << "number " << number << endl;
//         number++;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int number;
    
//     int count=1;
//     while (count<10)
//     {
//         cout<<"Enter 10 integer :";
//         cin>>number;
//         if (number%2==0)
//         {
//             cout<<number<<endl;
//         }else{
//             count++;
//             continue;
//         }
        
//     }
    
// }

#include<iostream>
using namespace std;
int main(){
    int number;
    // int count=1;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter a number :";
        cin>>number;
        if(number%2==0){
            cout<<number<<endl;
        }else{
            continue;
        }
    }
    cout<<"Your attempt is complete and even integer are print";
    
}