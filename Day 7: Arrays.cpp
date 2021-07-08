#include <bits/stdc++.h>

using namespace std;

int main(){
  
  //initializing variables
  int n, i;
  
  //taking the size of array
  cin>>n;
  
  //declaring array with size n
  int a[n];
  
  //using a for loop to take elements of array a
  for(i=0; i<n; i++)
    cin>>a[i];
  
  //starting the for loop from the last element and printing the reversed array
  for(i=n-1; i>=0; i--)
    cout<<a[i]<<" ";
  
  return 0;
}
                                        
