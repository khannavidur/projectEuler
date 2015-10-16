#include <iostream>
using namespace std;
 
int main() {
 
	long long int a=1,b=2,number,sum=2;
 
	while(b<=4000000){
		number = a + b;
 
		if(number>4000000)
			break;
 
		if(number%2==0)
			sum += number;
 
		a = b;
		b = number;
	}
 
	cout<<sum;
 
	return 0;
}

