//---------------------STRUCTURES:--------------------------------

// #include<iostream>
// using namespace std ;
//   struct employe
//   {
//     int id;
//     char favchar;
//     float sal;
//   };  
// int main(){
//     struct employe rohan;
//     rohan.id = 1;
//     rohan.favchar ='a';
//     rohan.sal = 200000;
//     cout<<"THE VALUE OF "<<rohan.id<<endl;
//     cout<<"THE VALUE OF "<<rohan.favchar<<endl;
//     cout<<"THE VALUE OF "<<rohan.sal<<endl;
//     return 0;
// }
//**************************ANOTHER WAY*********************
// #include<iostream>
// using namespace std ;
//     typedef struct employe
//     {
//         int id;
//         char favchar;
//         float sal;
//     }ep;
// int main(){
//     ep anand ;
//     anand.id=12;
//     anand.favchar='n';
//     anand.sal=22222;
//     cout<<anand.favchar<<endl;
//     cout<<anand.id<<endl;
//     cout<<anand.sal<<endl;
//     return 0;
// }
//-----------------UNION:-----------------
// #include<iostream>
// using namespace std ;
//     union money
//     {
//         int rice;
//         char car;
//         float pounds;

//     };
// int main(){
//     union money m1;
//     m1.rice= 24 ;
//     cout<<"Money is in the form of rice :"<<m1.rice<<endl;
//     m1.pounds = 100;
//     cout<<"Money is in the form of rice :"<<m1.rice<<endl;
//     //will take garbage value
//     return 0;
// }
//-------------------ENUMS-------------------------
#include<iostream>
using namespace std ;
    
int main(){
    enum meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    meal m1 = breakfast;
    cout<<(m1==2)<<endl;
    cout<<(m1==0)<<endl;
    cout<<m1<<endl;
    return 0;
}