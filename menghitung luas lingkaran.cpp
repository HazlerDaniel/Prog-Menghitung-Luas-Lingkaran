#include<stdio.h>
int main()
{
	float phi = 3.14;
	float jari, Luas;
	
	printf("masukan jari-jari lingkaran :");
	scanf("%f",&jari);
	
Luas = phi*jari*jari;
printf("luas lingkaran adalah: %.2f", Luas);
return 0;
}
