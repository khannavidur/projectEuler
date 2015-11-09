#include <iostream>
using namespace std;

int main() {
	int a[10];
	a[0] =1;
	for(int i = 1; i<10;i++){
		a[i] = i * a[i-1];
	}
 
	long long int sum = 0;
	for(int i =10;i<=3265920;i++){
		int j = i, sum_of_factorials= 0;
 
		while(j>0){
			int k = j%10;
			sum_of_factorials += a[k];
			j /= 10;
		}
		if(sum_of_factorials == i)
			sum += i;
	}
 
	cout<<sum;
	return 0;
}
