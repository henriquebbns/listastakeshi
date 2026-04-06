#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int cont=1000;
	cout<<"Todos os numeros de 1000 a 1999 que divididos por 11 dao resto 5 ";
	while (cont<2000)
	{
		if (cont%11==5){
			cout<<"\n"<<cont;
		}
		cont=cont+1;
	}
	
	return 0;
}