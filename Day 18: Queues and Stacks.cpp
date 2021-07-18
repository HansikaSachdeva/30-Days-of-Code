#include <iostream>
#include<stack>
#include<queue>

using namespace std;

class Solution {
    //Write your code here
    stack<char> s;
    queue<char>q;
    
    public:
    char c;
    
    void pushCharacter(char ch){
        s.push(ch);
    } 
    
    void enqueueCharacter(char ch){
        q.push(ch);
    }
    
    char popCharacter(){
        c = s.top();
        s.pop();
        return c;
    }
    
    char dequeueCharacter(){
        c = q.front();
        q.pop();
        return c;
    }

};

