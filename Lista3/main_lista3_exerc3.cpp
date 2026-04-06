#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int cont=10, soma=0;
	cout<<"mostra pares e soma";
	while (cont<101)
	{
		cout<<cont<<"\n";
		soma=soma+cont;
		cont=cont+2;
	}
	cout<<soma;
	return 0;
}