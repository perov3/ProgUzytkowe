#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    x[10]; y = 0; z = 0;
    cout << "Elements of the array";
        while(z < 20)
        {
            x[z] = rand() % 99;
            cout << x[z] << " ";
            y = y + x[z];
            z++;
        }
    {
        cout << "Sum of Elements" << y;

        return 0
    };



}