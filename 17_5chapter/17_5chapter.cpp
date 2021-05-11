#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str("aaaa");

    str.insert(2, "bbb");

    cout << str << endl;

    /*string str1("one");
    string str2("two");

    str1.append("three");
    str1.push_back('A');
    str1 += "three";

    str1 = str2 + "four";*/

    /*cout << str1 << " " << str2 << endl;

    std::swap(str1, str2);

    cout << str1 << " " << str2 << endl;

    str1.swap(str2);

    cout << str1 << " " << str2 << endl;*/

    //str2 = str1;
    //str2 = "two";
    //str2.assign("two").append(" ").append("three ").append("Four");

    //cout << str2 << endl;


    return 0;
}