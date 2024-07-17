#include "std.h"

int WbLib::input_integer(string ms)
{
    int vl;
    cout << ms << " : ";
    cin >> vl;
    return vl;
}

string WbLib::input_string(string ms)
{
    string vl;
    cout << ms << " : ";
    cin >> vl;
    return vl;
}

char WbLib::input_char(string ms)
{
    char vl;
    cout << ms << " : ";
    cin >> vl;
    return vl;
}

float WbLib::input_float(string ms)
{
    float vl;
    cout << ms << " : ";
    cin >> vl;
    return vl;
}
