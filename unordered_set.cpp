#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_set<int> s;
    s.insert(12);

    cout<<"Size: ";
    cout << s.size() << endl;

    cout<<"Iterator: ";
    cout << *s.find(12) <<endl;
    cout<< (s.find(1)==s.end()) <<endl;
    cout<< (s.find(12)==s.end()) <<endl<<endl;

    cout<<"Count: ";
    cout<< s.count(12) <<endl;
    cout<< s.count(1)<<endl;

    // s.erase(iterator OR element);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    //delete all
    s.erase(s.begin(),s.end());

    s.clear();
    return 0;
}
