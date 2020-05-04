/*
* rein_cast
*/
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) 
{
    double *double_array = new double[100];
    cout << typeid(double_array).name() << endl;

    char *char_array = reinterpret_cast<char *>(double_array);
    cout << typeid(char_array).name() << endl;
    
    return 0;
}