#include <iostream>
using namespace std;

int main() {
	//sum of squares ... iterative approach
	int sumOfSqaure =0;
	
	for(int i=1;i<=100;i++){
		sumOfSqaure += (i*i);
	}
	
	//square of sum .. n(n+1)/2
	int sum = (100*101)/2;
	
	int squareOfSum = sum*sum;
	
	cout<<(squareOfSum-sumOfSqaure);
	return 0;
}
