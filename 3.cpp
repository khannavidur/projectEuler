#include <iostream>
#include <string.h>
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
	/*
	* largest prime factor of the number 600851475143
	* sqrt of 600851475143 is 775146
	* brute force till 775146 to get max prime factor
	* one approach is get all prime numbers till 775146 
	* and check from reverse
	* or find the max factor and see if its prime
	* in reverse fashion
	* choosing approach 1 ...seives
	*/
	
	bool arr[775146];
	
	
	memset(arr,0,sizeof(arr));
	
	 for (int i=1; i<775146; i++){
	 	if (arr[i] == 0){
	 		//i+1 is prime
	 		markMultiples(arr, i+1,775146 );
	 		
	 	}
	 }
        
     
     
    for(int i=775146;i>1;i--){
    	if((arr[i]==0)&&(600851475143%(i+1)==0)){
    		cout<<i+1;
    		break;
    	}
    }
        
	
	
	return 0;
}
