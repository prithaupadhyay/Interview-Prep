/*
Print Power Set Problem
Author: Pritha Upadhyay

Approach: 
Here the aim was to print all the subsets of a set.
We attempted by looping over 0 to the number of elements in the power set. Then, the responsibility is just to print the element at those places where the binary number hold 1 value.

Example:
Set  = [a,b,c]
power_set_size = pow(2, 3) = 8
Run for binary counter = 000 to 111

Value of Counter            Subset
    000                    -> Empty set
    001                    -> a
    010                    -> b
    011                    -> ab
    100                    -> c
    101                    -> ac
    110                    -> bc
    111                    -> abc
*/ 
#include <iostream> 
#include <math.h> 
using namespace std; 

class gfg 
{ 
	
public: 
void printPowerSet(char *set, int set_size) 
{ 
	/*set_size of power set of a set with set_size 
	n is (2**n -1)*/
	unsigned int pow_set_size = pow(2, set_size); 
	int counter, j; 

	/*Run from counter 000..0 to 111..1*/
	for(counter = 0; counter < pow_set_size; counter++) 
	{ 
	for(j = 0; j < set_size; j++) 
	{ 
		/* Check if jth bit in the counter is set 
			If set then print jth element from set */
		if(counter & (1 << j)) 
			cout << set[j]; 
	} 
	cout << endl; 
	} 
} 
}; 


int main() 
{ 
	gfg g; 
	char set[] = {'a','b','c'}; 
	g.printPowerSet(set, 3); 
	return 0; 
} 

