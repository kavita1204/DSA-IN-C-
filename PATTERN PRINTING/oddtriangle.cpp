#include<iostream>
using namespace std;
int main()
{
    int r,c;
    for(r=1;r<=8;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(r%2!=0 && c%2!=0)
            {
                cout<<" "<<c;
            }
        }
        cout<<endl;
    }
    return 0;
}