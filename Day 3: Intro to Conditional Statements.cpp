#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%2!=0)
        cout<<"Weird";
    else if(n%2==0){
        if(n>1 && n<6)
            cout<<"Not Weird";
        else if(n>5 && n<21)
            cout<<"Weird";
        else if(n>20)
            cout<<"Not Weird";
     }
     return 0;
}
