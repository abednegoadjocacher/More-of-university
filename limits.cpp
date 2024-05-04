#include<iostream>
#include<limits>
#include <climits>//This header defines the INT_MAX, SHRT_MAX, LONG_MAX
using namespace std;
int main()
{
    //some integers have limits
    //The variables are initialize to the maxmum int value
    int n_seize = INT_MAX;
    short s_seize = SHRT_MAX;
    long l_seize = LONG_MAX;

    // printing the size of all the data type used using the sizeof operator
    cout<< "The size of int is "<< sizeof(int)<<" bytes"<<endl;
    cout<< "The size of short is "<< sizeof(short)<<" bytes"<<endl;
    cout<< "The size of long is "<< sizeof(long)<<" bytes"<<endl<<"\n\n";

    //printing the max values stored in the variable names
    cout<<"The MAX values "<<endl;
    cout<<"________________________"<<endl<<"\n";

    cout<<"The max value of n_seize is "<<n_seize<<" bytes"<<endl;
    //cout<<"The max value of s_seize is "<<s_seize<<"bytes"<<end;
    cout<<"The max value of l_long is "<<l_seize<<" bytes"<<endl;

    
    return 0;
}