#include <iostream>
using namespace std;
int main()
{
    int r,c;
    for(r=1;r<=4;r++)
    {
        for(c=1;c<=4;c++)
        {
            cout<<char(c+64);
        }
        cout<<endl;
    }
    return 0;
}