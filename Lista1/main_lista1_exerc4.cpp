#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	float raio=0, alt=0;
	cout<<"calculo de lata\n";
	cout<<"digite raio: ";
	cin>>raio;
	cout<<"\ndigite altura: ";
	cin>>alt;
	cout<<"\nO volume eh: "<<3.14159*raio*raio*alt;
	return 0;
}