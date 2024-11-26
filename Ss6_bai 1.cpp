#include<stdio.h>
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		printf("Nhap vao so thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	int sum=0;
	for(int i=0;i<5;i++){
		if(a[i]%2==0) sum+=a[i];
	}
	printf("Tong cac so le la :%d",sum);
}