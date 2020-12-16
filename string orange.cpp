#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "This is orange juice  ";
    string str1 = "orange";


      size_t found = str.find(str1);
    if (found != string::npos)
        cout << "Yes orange is present in "<< found << endl;


    return 0;
}
