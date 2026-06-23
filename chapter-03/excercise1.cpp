#include <iostream>  // Library for input and output

using namespace std;

int main()  // Main function
{
    double area, radius, volume, length;
    cout <<"Enter the radius of a cylider:";
    cin>>radius;
    cout<<"Enter the length of a cyclider :", cin>>length;

    area= radius*radius*3.14;
    volume= area*length;
    cout<<"The area is :"<<area<<endl;
    cout<<"The Volume is :"<<volume<<endl;
    

    return 0;  // End of program
}