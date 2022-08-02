//pointer arithmetic
#include<iostream>
using namespace std;

int main(){
    int marks[]={23, 45, 56, 89};
    /*cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;*/


    for (int i=0;i<4;i++)
    {
        cout<<"The value of marks"<<i<<"is"<<marks[i]<<endl;
    }

    //Pointers and arrays

    int* p=marks;
    /*cout<<"The value of marks[0] is"<<*p<<endl;
    cout<<"The value of marks[1] is"<<*(p+1)<<endl;
    cout<<"The value of marks[2] is"<<*(p+2)<<endl;
    cout<<"The value of marks[3] is"<<*(p+3)<<endl;*/

    cout<<*(p++)<<endl;//Here p++ is there so p is displayed first then p is incremented.
    cout<<*p;




    return 0;
}