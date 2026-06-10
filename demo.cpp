// Include input-output stream library
#include <iostream> 
//Allow using standard names like cout without std::
using namespace std; 

//Mainn function: Program starts execution here
int main()
{
    int a , b , sum ;
    cout<<"Enter first number " ;
    cin >> a;
    cout << "Enter second number ";
    cin >> b;
    sum = a+b ;
    cout <<"Sum = "<< sum ;
    //Return 0 indicate successful program exectution
    return 0; 
}