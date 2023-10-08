#include <iostream>
#include <fstream>
using namespace std;

bool checkkar(string str)
{
    if (str.length() > 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}