#include<iostream>
using namespace std;

int main()
{
    int positive;
    cout<<"Enter a positive number : ";
    cin>>positive;
    if(positive > 0)
    {
        cout<<"Positive";
    }
    else if(positive <0)
    {
        cout<<"Sorry negetive";
        return 1;
    }
    
    else 
    {
     cout<<"Sorry you cannot enter 0";
    }
    
    
    return 0;
}
