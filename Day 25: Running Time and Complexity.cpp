#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool prime(int n){
    if(n==1)
        return false;
    if(n==2)
        return true;
    int sqr = sqrt(n);
    for(int i=2; i<=sqr; i++){
        if(n%i==0)
            return false;
    }
        return true;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    bool ans;
    cin>>n;
    int a[n], i;
    for(i=0; i<n; i++){
        cin>>a[i];
        ans = prime(a[i]);
        if(ans)
            cout<<"Prime"<<endl;
        else 
            cout<<"Not prime"<<endl;
    }
    
    return 0;
}
