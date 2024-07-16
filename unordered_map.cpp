/*
Based on : Red Black tree
Uses Hashing
*/

#include <unordered_map>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    unordered_map<string,int> mp;
    mp["hello"] = 20;
    mp.insert({"world",40});

    if(mp.find("meow")!=mp.end()){
        cout<<"Key presend"<<"\n";
        auto value = mp.find("meow")->second;
    }

    if(mp.count("meow")){
        cout<<"Key Present"<<endl;
    }

    cout<<"SIze:: "<<mp.size()<<endl;

    mp.erase("hello");
    mp.erase(mp.find("hello")!=mp.end() ? mp.find("hello") : mp.end());
    mp.erase(mp.begin(),mp.end());

    for(pair<string,int> x: mp){
        cout<<x.first << x.second<<endl;
    }
    return 0;
}
