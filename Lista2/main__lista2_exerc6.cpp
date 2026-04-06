#include <iostream>
#include <math.h>


using namespace std;

int main(int argc, char** argv) 
{
    float x=0, y=0, z=0;

    cout<<"Digite o valor de X: ";
    cin>>x;

    cout<<"Digite o valor de Y: ";
    cin>>y;

    cout<<"Digite o valor de Z: ";
    cin>>z;

    // Verificação da condição de existência de um triângulo
    if(x < y + z && y < x + z && z < x + y)
    {
        cout<<"Os valores formam um triangulo.\n";

        // Classificação
        if(x == y && y == z)
        {
            cout<<"Triangulo Equilatero\n";
        }
        else if(x == y || x == z || y == z)
        {
            cout<<"Triangulo Isosceles\n";
        }
        else
        {
            cout<<"Triangulo Escaleno\n";
        }
    }
    else
    {
        cout<<"Os valores NAO formam um triangulo.\n";
    }

    return 0;
}
