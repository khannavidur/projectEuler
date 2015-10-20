#include <iostream>
#include <math.h>
using namespace std;
int main(){

    int arr[10001];
    arr[1] = 0;

    for(int i=2;i<10000;i++){
        int sum = 0;
        for(int j=1;j<i;j++){
            if(i%j==0)
                sum += j;
        }
        arr[i] = sum;
    }

     int s =0;

     for(int i=2;i<10000;i++){
         if(arr[i]<10000&&arr[i]>=0){
            if(i == arr[arr[i]] && i!=arr[i]){
             s += i;
            }
         }
     }

    cout<<s;

    return 0;
}

