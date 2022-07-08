#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float a, b, c, resultado1=0, resultado2=0;

    cout<<"Digite la variable a: "; cin>>a;
    cout<<"Digite la variabñe b: "; cin>>b;
    cout<<"Digite la variable c: "; cin>>c;

    resultado1=(-b + sqrt(pow(b,2)-4*a*c))/(2*a);
    resultado2=(-b - sqrt(pow(b,2)-4*a*c))/(2*a);

    cout<<"El resultado postivito es: "<<resultado1<<endl;
    cout<<"El resultado negativo es: "<<resultado2<<endl;

    return 0;

}