#include <iostream>
using namespace std;
int main(){

    int num = 7;
    int acum = 15;
    for (int i = 0; i < 22; i++)
    {
        cout<<acum<<endl;
        acum = acum + num;
    }

    cout<<acum<<endl;

    return (0);
}