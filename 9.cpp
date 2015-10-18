#include <iostream>
using namespace std;

int main() {
	long int a,b,c;
	
	for(c=3;c<=997;c++){
		for(b=2;b<c;b++){
			a = 1000 -(b+c);
		
		
			if(a<b && a>=1){
			
				if(((a*a) +(b*b)) == (c*c)){
					
					cout<<"Product : "<<a*b*c<<endl;
					break;
				}
			}
		
		}
	}
	
	return 0;
}
