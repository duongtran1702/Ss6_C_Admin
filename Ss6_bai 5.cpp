#include<stdio.h>
int main(){
	int month,year;
	printf("Nhap vao thang:");
	scanf("%d",&month);
	printf("Nhap vao nam :");
	scanf("%d",&year);
	if(year<0) {
	    printf("Nam khong hop le !");
		return 0;
    }
    else {
    	if(month==1||month==3||month==5||month==7||month==8||month==12||month==10){
        	printf("Thang %d nam %d co 30 ngay",month,year);
		}
		else if(month==4||month==6||month==9||month==11){
			printf("Thang %d nam %d co 30 ngay",month,year);	
		} 
		else if(month==2) {
			if(year%400==0||(year%4==0&&year%100!=0)){
				printf("Thang %d nam %d co 29 ngay ",month,year);
			}
			else{ 
		    	printf("Thang %d nam %d co 28 ngay ",month,year);
	    	}  
		}
		else {
			printf("Thang khong hop le !");
			return 0;
		}
    }
    return 0;
}
		
		
		
		