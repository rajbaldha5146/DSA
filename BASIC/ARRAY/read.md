📌 Common constants in <climits>:
Macro Meaning Example (on most systems)
INT_MAX Maximum value of int 2147483647
INT_MIN Minimum value of int -2147483648
LONG_MAX Maximum value of long 9223372036854775807 (64-bit)
LONG_MIN Minimum value of long -9223372036854775808
CHAR_MAX Maximum value of char 127
CHAR_MIN Minimum value of char -128
SHRT_MAX Maximum value of short 32767
SHRT_MIN Minimum value of short -32768
UCHAR_MAX Maximum value of unsigned char 255
UINT_MAX Maximum value of unsigned int 4294967295


#include <iostream>
#include <vector>
using namespace std;

class solution
{
    public:

};

int main()
{
    int size;

    cout << "Enter the number of Size of arr : " << endl;
    cin >> size;

    // arr = {1,2,3,4,5};
    vector<int> arr(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << " element" << endl;
        cin >> arr[i];
    }

    solution obj;
    
}



#### rotate array by k position
#### find duplicate using bs