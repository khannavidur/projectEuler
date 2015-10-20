#include <iostream>
using namespace std;
int main(){
    int months[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int sum =0;
    int no_of_days_till_date = 2; //tuesday

    for(int year=1901;year<=2000;year++){
        for(int month = 1;month<=12;month++){
             if(no_of_days_till_date%7==6){
                    sum++;
                }

            if(month!=2){
                no_of_days_till_date += months[month];
            }
            else{
                if(year%4==0){
                    no_of_days_till_date += 29;
                }else{
                    no_of_days_till_date += 28;
                }
            }
        }
    }

    cout<<sum;
    return 0;
}

