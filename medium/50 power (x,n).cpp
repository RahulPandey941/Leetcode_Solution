// write a code to calculate the value of n raised to the power n
// where n is a positive integer WHITOUT using any library function AND NOT DOING BRUTE FORCE

#include <iostream>
using namespace std;
int power(int x,int n) {
    if (n==0) return 1;
    int exp = n;
    int base = x;
    int result = 1;
    while(exp>0){
        if(exp%2 == 1) result *= base;
        base *= base ; 
        exp /= 2;
    }
    return result;
}
int main() {
    int n;
    int x ;
    cout << "Enter a Base integer: ";
    cin >> x;
    cout << "Enter power: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    int result = power(x , n);
    cout << x << " raised to the power of " << n << " is: " << result << endl;

    return 0;
}