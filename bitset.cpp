#include <bitset>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    bitset<8> b1;
    //8 bit number;

    b1.reset(0); 
    //setting the bit at index 0 as 0

    b1.set(1);
    //setting the bit value at index 1 as 1

    bitset<__INT8_MAX__> b2(99);
    //__INT_MAX__ bits number of default value 99

    bitset<99> b3("111111111111111111111111111111111111111111");
    //99 bits number of default value from string

    cout << b2.to_string() <<endl;

    //all bit operations are applicable here :

    return 0;
}
