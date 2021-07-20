 // Write your code here
    int swaps = 0;
    for(int i=0; i<n; i++){
        
        for(int j = 0; j<n-1; j++){
            if(a[j]>a[j+1]){
                swap(a[j], a[j+1]);
                swaps ++;
            }
        }
        if(swaps == 0) break;
    }
    cout<<"Array is sorted in "<<swaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    
