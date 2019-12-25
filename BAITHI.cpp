#include <stdio.h>
#include <math.h>
float chuvi(float a, float b, float c)
{
	float chuvi;
	chuvi = a + b + c;
	return chuvi;
}
float dientich(float a, float b, float c)
{
	float dientich;
	float p;
	p = (a + b + c)/2;
	dientich = sqrt(p*(p - a)*(p - b)*(p - c));
	return dientich;
}
main(){
	float a, b, c ;
	do{
	printf("Nhap canh a: \n");
	scanf("%f", &a);
	printf("Nhap canh b: \n");
	scanf("%f", &b);
	printf("Nhap canh c: \n");
	scanf("%f", &c);
	}
	while((a > b + c)||(b > a + c)||(c > a + b)||(a <= 0)||(b <= 0)||(c <= 0));
	printf(" Chu vi cua tam giac la: %f \n ", chuvi(a, b, c));
	printf(" Dien tich cua hinh tam giac la: %f \n", dientich(a, b, c));
	return 0;
}
