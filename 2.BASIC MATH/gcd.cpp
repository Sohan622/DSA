/*Euclidean Algorithm:

The Euclidean Algorithm is a method for finding the greatest common divisor (GCD)
of two numbers. It operates on the principle that the GCD of two numbers remains
the same even if the smaller number is subtracted from the larger number.

To find the GCD of n1 and n2 where n1 > n2:
1. Repeatedly subtract the smaller number from the larger number until one of them becomes 0.
2. Once one becomes 0, the other is the GCD of the original numbers.

Example:
n1 = 20, n2 = 15

gcd(20, 15) = gcd(20 - 15, 15) = gcd(5, 15)
gcd(5, 15)  = gcd(15 - 5, 5)  = gcd(10, 5)
gcd(10, 5)  = gcd(10 - 5, 5) = gcd(5, 5)
gcd(5, 5)   = gcd(5 - 5, 5)  = gcd(0, 5)

Hence, return 5 as the GCD.
    */

#include<iostream>
using namespace std;
int gcd(int a,int b){
    while (a>0 && b>0){ 
    if (a>b) {
        a=a-b;
    }
    else {b=b-a;}
    }
    if (a==0) return b;
    else return a;
}
int main(){
    int n1,n2;
    cout<<"Enter 2 numbers: ";
    cin>> n1>>n2;
    cout<<"GCD among "<<n1<<" and "<< n2<<" is: "<<gcd(n1,n2);
    return 0;
}