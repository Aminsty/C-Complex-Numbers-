#include <stdio.h>
#include <math.h>
#include "complexNumber.h"

Complex create_alg(double r, double i)
{
	Complex com;
	com.re=r;
	com.img=i;
	return com;
}
Complex create_geom(double m, double a)
{
	Complex com;
	com.re=m*cos(a);
	com.img=m*sin(a);
	return com;
}
double real(Complex z)
{
	return z.re;
}
double img(Complex z)
{
	return z.img;
}
double modulus(Complex z)
{
	return sqrt(pow(z.re, 2) + pow(z.img, 2));
}
double argument(Complex z)
{
	return atan(z.img/z.re);
}
void display_alg(Complex z)
{
	printf("Le nombre complexe sous la forme algebrique : %lf + %lf*i", z.re, z.img);
}
void display_geom(Complex z)
{
	printf("Le nombre complexe sous la forme geometrique : %lf(cos((%lf)*pi) + i*sin((%lf)*pi))", modulus(z), (argument(z)/M_PI), (argument(z)/M_PI));
}
Complex oppos(Complex z)
{
	Complex com;
	com.re=-z.re;
	com.img=-z.img;
	return com;
}
Complex conjug(Complex z)
{
	Complex com;
	com.re=z.re;
	com.img=-z.img;
	return com;
}
Complex inverse(Complex z)
{
	Complex com;
	com.re=z.re/(pow(z.re, 2)+pow(z.img, 2));
	com.img=-z.img/(pow(z.re, 2)+pow(z.img, 2));
	return com;
}
Complex power(Complex z, int n)
{
	Complex com;
	double a, b;
	a= modulus(z);
	b=argument(z);
	com.re=pow(a, n)*cos(n*b);
	com.img=pow(a, n)*sin(n*b);
	return com;
}
Complex add(Complex z1, Complex z2)
{
	Complex com;
	com.re=z1.re + z2.re;
	com.img=z1.img + z2.img;
	return com;
}
Complex sub(Complex z1, Complex z2)
{
	Complex com;
	com.re=z1.re - z2.re;
	com.img=z1.img - z2.img;
	return com;
}
Complex mul(Complex z1, Complex z2)
{
	Complex com;
	com.re=z1.re*z2.re - z1.img*z2.img;
	com.img=z1.re*z2.img + z1.img*z2.re;
	return com;
}
Complex divi(Complex z1, Complex z2)
{
	Complex com;
	double a, b, c, d;
	a=modulus(z1);
	b=argument(z1);
	c=modulus(z2);
	d=argument(z2);
	com.re=(a/c)*cos(b-d);
	com.img=(a/c)*sin(b-d);
	return com;
}
