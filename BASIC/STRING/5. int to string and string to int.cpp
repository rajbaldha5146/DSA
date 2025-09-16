#include <iostream>
#include <string> // for string, stoi, to_string
using namespace std;

int main()
{
    // String to int
    string strNum = "12345";
    int num = stoi(strNum); // convert string -> int

    cout << "String value: " << strNum << endl;
    cout << "After converting string to int: " << num << " (num + 10 = " << num + 10 << ")" << endl;

    // Int to string
    int number = 9876;
    string str = to_string(number); // convert int -> string

    cout << "Integer value: " << number << endl;
    cout << "After converting int to string: " << str << " (str + \"00\" = " << str + "00" << ")" << endl;

    return 0;
}
