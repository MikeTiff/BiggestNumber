//Author:
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
        int FirstNumber = 0;
        int SecNumber = 0;
        int A = 0;
        cout<<"Please enter a whole number:\n";
        cin>> FirstNumber;
        cout<<"Please enter another whole number:\n";
        cin>> SecNumber;
        if(FirstNumber > SecNumber)
        {A = FirstNumber;}
        else
        {A = SecNumber;}
        cout<<"Of those two numbers, the biggest is:"<<A;
        cout<<endl<<"Thank you for playing.\n";

        return 0;
}
