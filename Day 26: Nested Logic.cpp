#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int d1, d2, m1, m2, y1, y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    
    if(d1>0 && d1<32 && m1>0 && m1<32 && y1>0 && y1<3001){
        if(d2>0 && d2<32 && m2>0 && m2<32 && y2>0 && y2<3001){
    if(y1==y2){
        if(m1>m2)
            cout<<(m1-m2)*500<<endl;
        if(m1==m2){
            if(d1>=d2)
                cout<<(d1-d2)*15<<endl;
            else 
                cout<<0;
        }
        if(m1<m2)
            cout<<0;
    } 
    if(y1>y2)
        cout<<10000;
    if(y1<y2)
        cout<<0;
    }
    }
    return 0;
}
