#include<iostream>
using namespace std;
int main()
{
    int num, reminder, RevNum = 0;
    cout<<"Enter the number t be revers : ";
    cin>>num;
    //cout<<"You entered : "<<num<<endl;
    while(num > 0)
    {
        reminder = num % 10;
        RevNum = (RevNum * 10) + reminder;
        num/10;
    }
    cout<<"The reverse number is : "<<RevNum<<endl;
    return 0;
}