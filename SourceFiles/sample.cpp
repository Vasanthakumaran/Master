#include <iostream>
using namespace std;
 
// Returns a number that has all bits same as n
// except the k'th bit which is made 0
int turnOffK(int n, int k)
{
 	int y=k-1;
 	
 	cout << "  right shift of y: "<<(0>>(-32))<<"    ; left shift of y: "<<(1<<y)<<endl;
    // k must be greater than 0
    if (k <= 0) return n;
 
 	   int x= (1 << (k-1));
 	  // cout << x<< endl;
    // Do & of n with a number with all set bits except 15-1=14 1110 0011
    // the k'th bit
    return (n & x);
}
 
// Driver program to test above function
int main()
{
    int n = 32;
    int k = 6;
    cout << turnOffK(n, k);
	system("pause"); 
    return 0;
}
