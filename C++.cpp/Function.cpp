// #include<iostream>
// using namespace std ;
//     int sum(int a, int b){
//         int c = a + b;
//         return c;
//     }

// int main(){
//     int num1 , num2;
//     cout<<"Enter the first number "<<endl;
//     cin>>num1;
//     cout<<"Enter the second  number "<<endl;
//     cin>>num2;
//     cout<<"The sum is "<<sum(num1,num2)<<endl;
//     return 0;
// }
//-----------------------------Function prototype-----------------
#include<iostream>
using namespace std ;
    int sum(int a, int b);//funtion protype or funtion declartion
int main(){
    int num1 , num2;
    cout<<"Enter the first number "<<endl;
    cin>>num1;
    cout<<"Enter the second  number "<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl;//num1 and num2 are actual parameters
    return 0;
}
 int sum(int a, int b){ //formal parameters a and b will be taking values from actual parameters num1 and num2.
        int c = a + b;
        return c;
    }
    // it will not run 
    // if we wnt to run it we can use fun prototype
    // or can declare the function