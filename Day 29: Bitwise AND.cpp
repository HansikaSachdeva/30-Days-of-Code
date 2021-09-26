#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int N,K;
    cin>>N>>K;
    cout<<((((K - 1) | K) > N && K % 2 == 0) ? K - 2 : K- 1)<<endl;
    }
return 0;
}

