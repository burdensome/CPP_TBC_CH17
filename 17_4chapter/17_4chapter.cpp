#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string my_str("abcdefg");

    try 
    {
        //my_str[100] = 'X';    // 예외처리를 안해주네? 예외처리를 넣으면 느려져서 이건 예외처리가 안되는 버전
        my_str.at(100) = 'X';   // at으로 예외처리가 되는 버전으로 넣으면 throw 해줌!!
    }
    catch (std::exception& e)
    {
        cout << e.what() << endl;
    }

    /*cout << my_str[0] << endl;
    cout << my_str[3] << endl;

    my_str[3] = 'Z';

    cout << my_str << endl;*/

    return 0;
}