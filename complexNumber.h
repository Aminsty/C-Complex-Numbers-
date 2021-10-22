#ifndef COMPLEX_H
#define COMPLEX_H
#define M_PI 3.1415926535

typedef struct 
{
	double re;
	double img;
} Complex;

Complex create_alg(double r, double i);
Complex create_geom(double m, double a);

double real(Complex z);
double img(Complex z);
double modulus(Complex z);
double argument(Complex z);

void display_alg(Complex z);
void display_geom(Complex z);

Complex oppos(Complex z);
Complex conjug(Complex z);
Complex inverse(Complex z);
Complex power(Complex z, int n);

Complex add(Complex z1, Complex z2);
Complex sub(Complex z1, Complex z2);
Complex mul(Complex z1, Complex z2);
Complex divi(Complex z1, Complex z2);

#endif
