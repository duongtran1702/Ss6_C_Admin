#include<stdio.h>
#include<math.h>
int number_prime(int n){
	if(n<2) return 0;
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;
		}		
	return 1;
}

int main(){
	int n;
	printf("Nhap vao 1 so nguyen:");
	scanf("%d",&n);
	if(number_prime(n)==1)
		printf("Day la so nguyen to !");
	else
		printf("Day khong la so nguyen to !");	
}