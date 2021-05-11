#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string my_str("abcdefg");
    //// c style의 문자를 받기
    //cout << my_str.c_str() << endl;
    ////const char* arr = my_str.c_str();
    //const char* arr = my_str.data();
    ////cout << my_str.c_str()[6] << endl;
    //cout << (int)arr[6] << endl;
    //cout << (int)arr[7] << endl;
    ////cout << sizeof(arr) << endl;

    char buf[20];

    my_str.copy(buf, 5, 1);

    buf[5] = '\0';

    cout << buf << endl;

    return 0;
}