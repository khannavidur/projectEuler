#include <iostream>
using namespace std;

int main() {
	
	int arr[10002],k=0,num=3;
	arr[0] = 2;
	

	
	while(k!=10000){
		
		int div = 0;
		
		for(int i=0;i<=k;i++){
			if(num%arr[i]==0){
				div =1;
				break;
			}
		}
		
		if(div==0){
			arr[++k] = num;
		}
		num++;
		
		
	}
	cout<<arr[k];
	return 0;
}
