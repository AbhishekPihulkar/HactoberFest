#include<iostream>
using namespace std ;

int main(){
    // int marks[4]={11,22,33,44};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
   int mathMarks[5]={10,20,30,40,50};
//    cout<<mathMarks[0]<<endl;
//    cout<<mathMarks[1]<<endl;
//    cout<<mathMarks[3]<<endl;
//    cout<<mathMarks[4]<<endl;
//    mathMarks[4]=100;
//    cout<<mathMarks[4]<<endl;
//    for (int i = 0; i < 5; i++)
//    {
//     cout<<"Marks of math are "<<mathMarks[i]<<endl;
//    }
   int i = 0;
   while (i<5)
   {
    cout<<"MATH MARKS ARE "<<mathMarks[i]<<endl;
    i++;
   }
    return 0;
}