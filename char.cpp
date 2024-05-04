#include<iostream>
using namespace std;
int main()
{
    /*
        Allow user to enter a character
        print the character with a message 
        Find the ASCII code 
        Print the ASCII value 
        Perform some computation
    */
   char ch;
   cout<<"Enter any character of your choice : ";
   cin>> ch;
   cout<<"Thank you for entering the character:"<<" \""<<ch<<"\""<<"\n";
   int num_ch = ch;
   cout <<"The ASCII value of the character "<<" \"";
   cout.put(ch) <<"\" "<< "is "<<num_ch<<"\n";
   ch = ch + 1;
   cout<<"The new character is: "<<"\""<<ch<<"\""<<endl;
   num_ch = ch;
   cout<<"The new ASCII value for the new character :"<<" \"";
   cout.put(ch)<<"\" "<<"is now "<<num_ch<<endl;
   return 0;

}
