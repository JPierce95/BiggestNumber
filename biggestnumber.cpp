//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
        int num1, num2, biggestNum;
        cout<<"Please enter a whole number:\n";
        cin>> num1;
        cout<<"Please enter another whole number:\n";
        cin>> num2;
        if(num1>num2){
                cout<<"Of those two numbers, the biggest is: "<< num2 << "!\n";
        }
        if(num1 < num2){
                cout<<"Of those two numbers, the biggest is: " << num2 << "!\n";
        }
        else{
                cout<<"These two numbers are equal!\n";
        }
        cout<<"Thank you for playing.\n";

        return 0;
}
