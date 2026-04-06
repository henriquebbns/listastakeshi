#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int n1=1,f=0,d=0,n2=0;
	cout<<"Insira 10 numeros inteiros para avaliar se estão dentro ou fora do periodo de 10 a 20\n";
	while(n1<11){
		cout<<"Insira o "<<n1<<" valor: \n";
		cin>>n2;
		if(n2>9 and n2<21){
			d=d+1;
		}
		else{
			f=f+1;
		}
		n1=n1+1;
	}
	cout<<"Existem "<<f<<" numeros fora do periodo e "<<d<<" numeros dentro do periodo.";
	return 0;
}