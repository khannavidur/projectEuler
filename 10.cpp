#include <iostream>
#include <stdio.h>
using namespace std;

void markMultiples(bool arr[], int a, int n){
   int i =2;
   while((i*a)<=n){
   		arr[(i*a) -1] = 1;
   		i++;
   }
}

int main() {

	
	bool arr[2000000];
	
	
	memset(arr,0,sizeof(arr));
	
	 for (int i=1; i<2000000; i++){
	 	if (arr[i] == 0){
	 		//i+1 is prime
	 		markMultiples(arr, i+1,2000000 );
	 		
	 	}
	 }
        
    unsigned long long int sum = 0;
     
    for(int i=2000000;i>=1;i--){
    	if(arr[i]==0){
    		sum += (i+1);
    		
    	}
    }
        
	cout<<sum;
	
	return 0;
}
