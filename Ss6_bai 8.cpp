#include<stdio.h>
int main(){
	int month;
	float money_begin;
	int interest_rate;
	float money_end;
	printf("Nhap so tien gui:");
	scanf("%f",&money_begin);
	printf("Nhap lai suat :");
	scanf("%d",&interest_rate);
	printf("Nhap so thang gui :");
	scanf("%d",&month);	
	for(int i=1;i<=month;i++){
		money_begin=money_begin*interest_rate*0.01+money_begin;
		money_end=money_begin;
	}
	printf("So tien rut ra la : %.3f",money_end);
}