#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, rem=0, c=0, max=0;;
    cin>>n;
    while(n!=0){
        rem=n%2;
        n=n/2;
        if(rem==1)
            c++;
        else
            c=0;
        if(c>max)
            max=c;
    }
    cout<<max;
}
