#include<stdio.h>
#include<math.h>
int main(){
	//ax^2+bx+c=0
	printf("Nhap a,b,c :");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a==0){
		printf("Day la phuong trinh bac nhat");
		if(b==0){
			if(c==0) printf("Phuong trinh co vo so nghiem");
			else printf("Phuong trinh vo nghiem");
		}
		else { 
		float x=(float)-c/b;
		printf("Phuong trinh co nghiem duy nhat :x=%.2f",x);
		}
	}
	else {
		int delta=b*b-4*a*c;
		if(delta<0) printf("Phuong trinh vo nghiem");
		else if (delta==0) {
		int x=-b/(2*a);
			printf("Phuong trinh co nghiem kep : x=%d",x);
		}
		else {float x1=(-b+sqrt(delta))/(2*a);
		float x2=(-b-sqrt(delta))/(2*a);
		printf("Phuong trinh co 2 nghiem :x1=%.2f va x2=%.2f",x1,x2);
			
		}
		
	}
}