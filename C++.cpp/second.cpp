/*#include<iostream>
using namespace std;
int glo = 6;
void sum()
{ 
    cout<<glo;
}
int main(){
    int glo = 12;
        glo = 80;
    cout<<glo;
    sum();


    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int num1 , num2;
    cout<<"Enter First Number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"THE SUM OF TWO NUMBERS IS : "<< num1+num2;


    return 0;
}*/


/*#include<iostream>

using namespace std;
int main(){
    int a,b;
    a=4;
    b=9;
    cout<<"A is greater than B:"<<(a>b)<<endl;
    cout<<"B is greater than A:"<<(a<b)<<endl;
    cout<<"B is greater than equals to A:"<<(a<=b)<<endl;
    cout<<"A is greater than equals to B:"<<(a>=b)<<endl;
    cout<<"B equals to A:"<<(a==b)<<endl;
    cout<<"B not equals to A:"<<(a!=b)<<endl;
    cout<<"LOGICAL OPREATORS;-"<<endl;

    cout<<"Logical And operation:"<<((a==b) && (a!=b))<<endl;
    cout<<"Logical OR operation:"<<((a==b) || (a!=b))<<endl;
    cout<<"Logical not operation:"<<!((a==b) && (a!=b))<<endl;

    return 0;
}*/
 
 //SCOPE RESOLUTION OPERATOR

 /*#include<iostream>

 using namespace std;

    int c =59;
 int main(){
    int a,b,c;
    cout<<"Enter the value of A:"<<endl;
    cin>>a;
    cout<<"Enter the value of B:"<<endl;
    cin>>b;
    c = a + b;
    cout<<"The sum of two number is:"<<c<<endl;
    cout<<"THE SUM OF TWO NUMBER IS:"<<::c;//global variabl


    return 0;
 }*/
/*#include<iostream>

using namespace std;

int main(){
    int a=10;
    float b= 20.10;
    cout<<"THE VALUE OF B IS:"<<int(b)<<endl;
    cout<<"THE SUM  OF TWO NUMBER  IS:"<<a+b<<endl;
    cout<<"THE sum of two number IS:"<<a+int(b)<<endl;
    return 0;
}*/ 
//****************Constants**************
/*#include<iostream>

using namespace std;
int main(){
    const int a = 45;
    cout<<"The value of a was :"<<a<<endl;
    a = 87;
    cout<<"The value of a is :"<<a<<endl; 


    return 0;
}*/
//********************MANIPULATORS**************************
/*#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a=1, b=12, c=123,d=1234;
    cout<<"Before using setw"<<endl;
    cout<<"The value of A is :"<<a<<endl;
    cout<<"The value of B is :"<<b<<endl;
    cout<<"The value of C is :"<<c<<endl;
    cout<<"The value of D is :"<<d<<endl;
    cout<<"After using setw:"<<endl;
    cout<<"The value of A is :"<<setw(4)<<a<<endl;
    cout<<"The value of B is :"<<setw(4)<<b<<endl;
    cout<<"The value of C is :"<<setw(4)<<c<<endl;
    cout<<"The value of D is :"<<setw(4)<<d<<endl;

}*/
//If else
/*#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<18){
        cout<<"You cannot come to the party!!";
    }
    else if(age==18){
        cout<<"You are eligible for kids pass";
    }
    else if(age<0){
        cout<<"You are not yet born";
    }
    else{
        cout<<"Welcome to the Freshers party!!!!!!";
    }
    return 0;
}*/
//******************************Switch case****************************
// #include<iostream>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Enter your age:";
//     cin>>age;
//     switch (age)
//     {
//     case 18:
//         cout<<"You are 18"<<endl;
//         break;
//         case 98:
//         cout<<"You are alive"<<endl;
//         break;
//         case 1:
//         cout<<"Welcome to the world"<<endl;
//         break;
    
//     default:
//         cout<<"No special cases"<<endl;
//         break;
//     }
//     cout<<"End of switch case"<<endl;
//     return 0;
// }



