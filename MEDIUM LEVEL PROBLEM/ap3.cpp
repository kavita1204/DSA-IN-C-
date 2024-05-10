#include <iostream>
using namespace std;
int main()
{
    int a=100;
    for(int i=100; i>4; i=i-3){
        cout<<a<<" ";
        a = a-3;
    }
}