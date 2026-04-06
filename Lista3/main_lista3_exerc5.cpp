#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) 
{
	int n1=0,n2=0,n3=0,cont=1,mi=0, mg=0;
	cout<<"Ler 3 notas de cada um dos 50 alunos da turma, dizer se cada um esta aprovado ou nao junto de sua media, e entao dizer a media da turma. \n";
	while (cont<11)
	{
		cout<<"\n Aluno "<<cont;
		cout<<"\n Insira a nota 1: ";
		cin>> n1;
		cout<<"\nInsira a nota 2: ";
		cin>> n2;
		cout<<"\nInsira a nota 3: ";
		cin>> n3;
		mi=(n1*2+n2*4+n3*3)/9;
		cout<<"\n a media do aluno eh "<<mi;
		if (mi>=7){
			cout<<"\n aprovado";
		}
		else{
			cout<<"\n reprovado";
		}
		mg=mg+mi;
		cont=cont+1;
	}
	cout<<"\n a media da turma eh "<<mg/(cont-1);
	
	return 0;
}