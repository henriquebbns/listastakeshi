#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	float n1=0,n2=0;
	cout<<"calculo media\n";
	cout<<"digite 1 numero: ";
	cin>> n1;
	cout<<"\ndigite 2 numero: ";
	cin>> n2;
	n1=(n1+n2)/2;
	cout<<"\nsua media eh: "<<n1;
	if (n1>=6)
	{
		cout<<"\naprovado";
	}
	else
	{
		cout<<"\nreprovado";
	}
	return 0;
}