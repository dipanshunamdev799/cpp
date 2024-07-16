#include <set>
#include <iostream>
using namespace std;
/*
- Implimented using self balancing binary tree
- can store multiple values
- stores in sorted order
- ascending order
- O(nlogn) insert and erase
*/
int main(int argc, char const *argv[])
{
    multiset<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(1);
    for(auto it: s){
        cout<< s.count(it) <<endl;
    }
    s.erase(1);         //erase all
    s.erase(s.find(1));     //erase one

    return 0;  
}
