#include<stdio.h>
#define MAX 100
#include<string.h>
int main(){
	char password[MAX];
	char enter_password[MAX];
	printf("Dat mat khau :");
	scanf("%s",&password);
	printf("Vui long nhap mat khau :");
	scanf("%s",&enter_password);
	if(strcmp(enter_password,password)==0)
    printf("Nhap mat khau thanh cong!\n");
	else 
	printf("Nhap mat khau that bai !\n");
}