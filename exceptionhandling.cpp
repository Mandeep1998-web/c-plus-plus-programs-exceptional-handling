#include<iostream>
using namespace std;
int main()
{
int i=3;
    try{
        if(i==12.3)
    throw 12.3;
   else if(i==3.5)
    throw 3.5;
    else if(i=="hello")
        throw "hello";
    }
    catch(...){
    cout<<"the value of e";
    }// you can write multiple catch but they have different data type

}
