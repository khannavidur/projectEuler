#include <iostream>
using namespace std;
int main(){
    int number = 100,a[200] = {0},m=1,carry=0,i,j,sum=0;
    a[0] = 1;
    for(i=1;i<=number;i++){

        for(j=0;j<m;j++){
           int x  = a[j]*i + carry;
           carry  = x/10;
           a[j]   = x%10;
        }

        while(carry !=0){
            a[m]   = carry%10;
            carry /= 10;
            m++;
        }
    }

    for(i=m;i>0;i--)
        sum += a[i];

    cout<<sum;

    return 0;
}

