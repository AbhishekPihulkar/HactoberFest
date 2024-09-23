// #include<iostream>
// using namespace std ;

// int main(){
//    int a=13;
//    int* b=&a;
//    cout<<"The address of a is "<<b<<endl;
//    cout<<"The value at a is "<<*&a<<endl;
//     return 0;
// }

//***************************Pointer to Pointer******************** */
// #include<iostream>
// using namespace std ;

// int main(){
//     int a=3;
//     int* b=&a;
//     cout<<"The adress of a is "<<b<<endl;
//     cout<<"The adress of a is "<<&a<<endl;
//     cout<<"The value at adress of a is "<<*b<<endl;
//     int** c=&b;
//     cout<<"The adress of b is "<<c<<endl;
//     cout<<"The adress of b is "<<&b<<endl;
//      cout<<"The value at  of c is "<<**c<<endl;


//     return 0;
// }
//**********************************Arrays and Pointer*********************
#include<iostream>
using namespace std ;

int main(){
    int marks[4]={10,20,30,40};
    int* p = marks;
    cout<<"The base address is "<<*p<<endl;
    cout<<"The next address is "<<*(p+1)<<endl;
    cout<<"The next address is "<<*(p+2)<<endl;
    cout<<"The next address is "<<*(p+3)<<endl;
    return 0;
}