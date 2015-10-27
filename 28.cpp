#include <iostream>
using namespace std;

int main() {
	long long int count = 0,i,sq,lesser;
	for(i =1;i<=1001;i++){
		if(i%2==1){
			sq = i*i;
			lesser = i-1;
			count += sq;
			if(i!=1){
				count += (sq -lesser) + (sq-(2*lesser)) +(sq-(3*lesser));
			}
			
		}
			
	}
	cout<<count;
	return 0;
}
