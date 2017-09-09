#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

char sv() {
	char sdt[20];
	char ngaysinh[10];
	char ten[20];
	int i;
	while(i<3 || i>15){
    printf("\nNhap vao ten sinh vien:");
    scanf("%[^\n]s",ten);
    getchar();
    i = strlen(ten);
    if(i >=3 && i <=15 )
    	printf("Ten sinh vien la %s \n", ten);
	else
		printf("Moi nhap lai ten \n");	
}
	{
	printf("Moi nhap ngay sinh: ");

	scanf("%[^\n]s",ngaysinh);
	getchar();
	printf("Ngay sinh: %s \n",ngaysinh);
	}
	{
	printf("Moi nhap sdt: ");
	scanf("%[^\n]s",&sdt);
	getchar();
	printf("Sdt: %s",sdt);
return 0;
}
}

int main(){
int a;
printf("1.Them moi sinh vien\n");
printf("2.Hien thi danh sah\n");
printf("3.Sua sinh vien\n");
printf("4.Xoa sinh vien\n");
printf("5.Thoat\n");
printf("=========================\n");
printf("Nhap lua chon cua ban: ");
scanf("%d",&a);
getchar();
switch(a){
	case 1:
		sv();
		break;
}
}

