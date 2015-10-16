#include <iostream>
using namespace std;

int main() {
	/*
	* smallest positive number that is evenly divisible
	* by all of the numbers from 1 to 20
	* prime numbers till 20 are 2,3,5,7,11,13,17,19
	* max powers of all 
	* 2 - 4 (i.e 2^14 = 16 exits in 1-20)
	* calculate for all such primes and then 
	* multiply them
	*/
	
	int primesInRange[] = {2,3,5,7,11,13,17,19};
	int length 		  = sizeof(primesInRange)/sizeof(*primesInRange);
	int mul=1;
	//just for fun ... length is actually 8
	for(int i=0;i<8;i++){
		int no = primesInRange[i];
		while(no<=20){
			no = no*primesInRange[i];
		}
		no = no/primesInRange[i];
		mul = mul*no;
	}
	cout<<mul;
	return 0;
}
