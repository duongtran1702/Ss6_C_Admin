#include<stdio.h>
int main(){
	int x=0;
	int y=1;
	int temp;
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	printf("Day so fibonaci la :");
	if (n==0) printf("F(0)=0");
	else if (n==1) printf("F(1)=1");
	else{
	for(int i=1;i<=n;i++){	
			temp=x+y;
			y=x;
			x=temp;	
			printf("F(%d)=%d\n",i,temp);	
    	}
    }
}