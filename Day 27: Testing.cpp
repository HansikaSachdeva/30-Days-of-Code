class TestDataEmptyArray{
    public:
    
    static vector <int> get_array(){
        vector <int> arr= {};
        return arr;
    }
};

class TestDataUniqueValues{
    public:
            
    static vector <int> get_array(){
        vector <int> arr= {1, 2, 3, 4, 5};
        return arr;
        }
    static int get_expected_result(){
        return 0;
    }
};

class TestDataExactlyTwoDifferentMinimums{
    public:
    
    static vector <int> get_array(){
        vector <int> arr={1,3,1};
        return arr;
    }
    static int get_expected_result() {
        return 0;
    }
};                   

