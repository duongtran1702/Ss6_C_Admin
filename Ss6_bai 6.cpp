#include<stdio.h>
int main (){
	for(int i=1;i<=100;i++){
		printf("%d ",i);
		if(i%3==0&&i%5!=0) 
			printf("\nFizz\n");
		if(i%5==0&&i%3!=0) 
			printf("\nBuzz\n");
		if(i%3==0&&i%5==0) 
			printf("\nFizzBuzz\n");	
	}
}