/*
* const_cast
*/
#include <iostream>

using namespace std;

void foo(double const & d)
{
    const_cast<double &>(d) = 10;
}

int main(int argc, const char * argv[]) 
{
    double a = 1;

    cout << a << endl;
    foo(a);
    cout << a << endl;

    return 0;
}