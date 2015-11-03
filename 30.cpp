#include <iostream>
using namespace std;
bool isSumPower5(int x){
	int n = x;
	int sum = 0;
	while(n>0){
		int dig = n%10;
		sum += (dig)*(dig)*(dig)*(dig)*(dig);
		n /=10;
	}
	
	return (sum==x);
}
int main() {
	//295245 = (9^5)*5;
	long int sum = 0;
	for(int i=10;i<295245;i++){
		if(isSumPower5(i))
			sum += i;
	}
	
	cout<<sum;
	return 0;
}
