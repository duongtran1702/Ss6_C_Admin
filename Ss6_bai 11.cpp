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
	printf("Nhap vao n so nguyen to muon in ra :");
	int n;
	int index=0;
	scanf("%d",&n);
	for(int i=2;;i++){
		if(number_prime(i)==1){
			printf("%d ",i);
			index+=1;
		}
		if(index==n) return 0;			
	}
}