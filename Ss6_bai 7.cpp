#include<stdio.h>
int main(){
	int n;
	printf("Nhap vao n:");
	scanf("%d",&n);
	printf("Cac uoc cua %d la:",n);
	for(int i=1;i<=n;i++){
		if(n%i==0) 
			printf("%d ",i);
	}
}
