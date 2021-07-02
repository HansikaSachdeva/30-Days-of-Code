#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    //initializing variables
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    string str {};
    int a;
    double b{0.0};
  
    //taking input
    cin>>a>>b;
    cin.ignore();
    getline(cin,str);
  
    //showing the output
    cout<<a+i<<endl;
    cout<<fixed<<setprecision(1)<<b+d<<endl;
    cout<<s + str ;   
 
    return 0;
}
