#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string my_str("abcdefg");

    try 
    {
        //my_str[100] = 'X';    // ����ó���� �����ֳ�? ����ó���� ������ �������� �̰� ����ó���� �ȵǴ� ����
        my_str.at(100) = 'X';   // at���� ����ó���� �Ǵ� �������� ������ throw ����!!
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