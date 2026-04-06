#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int a=0, b=0, c=0;
	cout<<"coloque 3 valores inteiros para calculo da equacao do 2 grau";
	cout<<"\ncoloque o valor de A: ";
	cin>> a;
	cout<<"\ncoloque o valor de B: ";
	cin>> b;
	cout<<"\ncoloque o valor de C: ";
	cin>> c;
	c= pow(b,2)-4*a*c;
	cout<< "\nSeu delta eh: "<<c;
	if (c<0)
	{
		cout<<"\nnao existem raizes reais";
	}
	if (c==0)
	{
		cout<<"\nexiste uma raiz real, ela eh: "<<(-b)/(2*a);
	}
	if (c>0)
	{
		cout<<"\nexistem duas raizes reais, estas sao: "<<(-b+sqrt(c))/(2*a) << " e " << (-b-sqrt(c))/(2*a);
	}
	return 0;
}