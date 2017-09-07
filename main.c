#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
while (true){
int a;
printf("1.Tinh tong 2 so\n");
printf("2.Tinh hieu 2 so\n");
printf("3.Tinh tich 2 so\n");
printf("4.Tinh thuong 2 so\n");
printf("5.Thoat\n");
printf("Nhap lua chon");
scanf("%d",&a);
switch(a){
	case 1:{
		int b,c,plus;
		printf("Nhap vao 2 so\n");
		scanf("%d %d",&b,&c);
		printf("Tong = %i\n", plus = b+c);
	}
		break;	
	case 2:{
		int b,c,minus;
		printf("Nhap vao 2 so\n");
		scanf("%d %d",&b,&c);
		printf("Hieu = %i\n", minus = b-c);
	}
		break;
	case 3:{
			int b,c,multi;
		printf("Nhap vao 2 so\n");
		scanf("%d %d",&b,&c);
		printf("Tich = %i\n", multi = b*c);
		}	
		break;
	case 4:{
			int b,c,div;
		printf("Nhap vao 2 so\n");
		scanf("%d %d",&b,&c);
	if (c==0){
		printf("Khong the thuc hien phep toan nay\n");}
		else{
		printf("Thuong = %i\n", div=b/c);}
	}
	break;
}
if(a==5)
return 0;
}}
