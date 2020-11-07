#include<iostream>
using namespace std;
int fun()
{
    throw 100;
}
int main()
{
    int i=3;
        try
        {
            fun();
           }
        catch(int e){
        cout<<"exception for this is "<<e;
        }
    }


