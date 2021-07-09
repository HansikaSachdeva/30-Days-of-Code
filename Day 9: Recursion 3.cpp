/*
 * Complete the 'factorial' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int factorial(int n) {
    
    if(n==0)
        return 1;
    return n*factorial(n-1);
    
}
