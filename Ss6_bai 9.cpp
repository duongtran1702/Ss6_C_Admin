#include<stdio.h>
#include<math.h>
int main(){
	int temp;
	int number;
	for (int i=100;i<1000;i++){	
		number=i;
		temp=0;
		while(number>0){
			temp+=pow((number%10),3);
			number/=10;
		}
		if(temp==i) printf("%d \n",i);
    }
}
	            