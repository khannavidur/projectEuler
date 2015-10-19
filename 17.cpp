#include <iostream>
#include <string>
using namespace std;

int stringlength(int x){

    string basic[]  = {"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[]   = {"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string hundred  = "hundred";
    string thousand = "thousand";


    if(x<20)
        return basic[x-1].length();

    if(x>=20 &&  x<100){
        if(x%10==0)
            return tens[(x/10)-2].length();
        else
            return tens[(x/10)-2].length()+ basic[(x%10)-1].length();
    }


    if(x>=100&&x<1000){

        int count  = basic[(x/100)-1].length() + hundred.length();

        if(x%100==0)
            return count;


        count += 3;//and

        int tenth  = ((x/10)%10);

        if(tenth == 0)
            return count + basic[(x%10)-1].length();


        if(tenth > 1){
            count += tens[tenth-2].length();
        } else{
            count +=  basic[(x%100)-1].length();//212
            return count;
        }

        if(x%10!=0)
            return count + basic[(x%10)-1].length();
        else return count;
    }


    if(x==1000)
        return basic[0].length() + thousand.length();

}
int main(){
    int count = 0;
    for(int i=1;i<=1000;i++){
        count += stringlength(i);
    }
    cout<<count;

}

