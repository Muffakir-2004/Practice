#include <iostream>

using namespace std;

int main()
{
    int a, count=0;
    cout<<"Enter a number which you find whether it is prime: ";
    cin>>a;
    for (int i = 1; i <= a; i++)
    {
        if (a%i==0)
        {
            count++;
        }
        
    }
    if(count==2)
     {
        cout<<"The number you entered "<<a<<" is prime"<<endl;
     }
    else
     {
        cout<<"the number you entered "<<a<<" is not prime"<<endl;
     }
    
    return 0;
}