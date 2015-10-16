#include <iostream>
#include<math.h>
using namespace std;

bool is_palin(int number){
	
	int length =0,powerOfTen,number1,number2,dummy=number;
	
	while(dummy>0){
		length++;
		dummy = dummy/10;
	}
	
	

		/*
		*	divide in two equal parts
		*	eg if number is 9889
		* 	the two parts are 99,89(second part is obviously reversed)
		*	do no1-no2 and see if its 0 
		*/
		powerOfTen = pow(10,length/2);
		
		if(length%2==0){
			number1 = number/powerOfTen;
		} else{
			number1 = (number/powerOfTen)/10;
		}
		
		number2 = 0;
		
		dummy = number;
		
		for(int x =length;x>length/2;x--){
			number2 = number2*10 +  (dummy%10);
			dummy = dummy/10;
		}
		
		/*cout<<"number  :"<<number<<endl;
		cout<<"number1 :"<<number1<<endl;
		cout<<"number2 :"<<number2<<endl;*/
		
		if(number1-number2==0)
			return true;
		
		
	return false;	
}
	
int main() {
	int palin = 0;
	
	for(int i=999;i>=100;i--){
		for(int j=999;j>=100;j--){
			if(is_palin(i*j)){
				
				if(palin<i*j){
					palin = i*j;
				}
					
			}
		}
	}
	cout<<palin;
	return 0;
}
