#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

string doublethis(string s){
	int length = s.length(), carry = 0;

	string k="",r;

	while(length>0){
        string x;
		int no = (int)s[length-1] - 48;
		no    *= 2;
		no     = no + carry;
		carry  = no/10;
		no     = no%10;
		no     = no + 48;
        x      = no;
		k      = x + k;
		length--;
 	}

 	if(carry!=0){
        carry = carry + 48;
        r = carry;
        k = r+k;
 	}

 	return k;

}

int sumThis(string s){
    int i=0,sum =0;
    while(s[i]!='\0'){
        sum += ((int)s[i]-48);
        i++;
    }
    return sum;
}

int main()
{
	string x,y;
	x= "2";

	for(int i=1;i<1000;i++){
       x = doublethis(x);
	}

	cout<<sumThis(x);

	return 0;
}

