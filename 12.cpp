#include <iostream>
#include <math.h>
using namespace std;
 
int no_of_divisors(unsigned long long int x){
	unsigned long long int sqroot = sqrt(x),i;
	int count =2;
 
	for(i=2;i<sqroot;i++){
		if(x%i==0){
			count+=2;
		}
	}
	return count;
}
 
int main() {
	unsigned long long int i=1,k,no; //starting by the 100th triangle number
	while(1){

		no = (i*(i+1))/2;
		int count =0; 		
		count = no_of_divisors(no);
		if(count>500){
			cout<<no;
			break;
		}
 
		i++;
	}
	return 0;
}
 
