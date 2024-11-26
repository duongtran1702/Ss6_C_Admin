#include<stdio.h>
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		printf("Nhap vao so thu %d :",i+1);
		scanf("%d",&a[i]);
	}
	int even=0;
	int odd=0;
	for(int i=0;i<5;i++){
		if(a[i]%2==0) even+=1;
		else odd+=1;
	}
	printf("So luong so le la :%d\n",odd);
	printf("So luong so chan la :%d\n",even);
	
}