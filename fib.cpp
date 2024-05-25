#include<iostream>
using namespace std;
int main()
{
    int number,firstnumber=0,secondnumber=1,next;
    cout<<"enter the of terms t0 be printed in fibonacci series";
    cin>>number;
    cout<<"fibonacci series";
    for(int i=0;i<=number;i++)
    {
        cout<<firstnumber<<endl;
        next=firstnumber+secondnumber;
        firstnumber=secondnumber;
        secondnumber=next;

    }
}
