#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  
    //initializing variables
    int n=0, i;
  
    //taking input
    cin>>n;
    
    //starting loop
    while(n--){
      
    //declaring string variables
    string str, temp1, temp2;
      
    //taking string input
    cin>>str;
      
    //starting for loop to check the position of string characters
    for(i=0; i<str.size(); i++){
        
        //if it is an even position, add character to temp1
        if(i%2==0)
            temp1 += str[i];
      
        //if it is an odd position, add character to temp2
        else
            temp2 += str[i];
    }
      
    //displaying the pitput
    cout<<temp1<<" "<<temp2<<endl;
    }
  
    return 0;
}
