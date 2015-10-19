#include <iostream>
using namespace std;

int main()
{
	long int no,i,conjecture=0,startingNo=0;



	for(i =1;i<1000000;i++){
		//for each no get Conjecture count
		long int count = 1;

		no = i;

		while(no!=1){

			if(no%2==0){

				no = no/2;
                count++;
                
			}else{

				no = (3*no) +1;
				count++;

			}
		}



		//cout<<"no is -> "<<i<<" and count is -->"<<count<<endl;
		if(conjecture<count){
			conjecture = count;
            startingNo =i;
        }
    }

	cout<<startingNo;

	return 0;
}

