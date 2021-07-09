#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  
    //declaring variables
    int n;
    string name;
    long no;
  
    //taking input
    cin>>n;
  
    //declaring phone book as a map
    map <string, long> pbook;
  
    //taking values of pbook
    while(n--){
        cin>>name>>no;
        pbook[name] = no;
    }
  
    //mapping names to their phone numbers
    while(cin>>name){
        if(pbook.find(name) != pbook.end())
            cout<<name<<"="<<pbook.find(name)->second<<endl;
        else
            cout<<"Not found"<<endl;
    }
  
    return 0;
}
