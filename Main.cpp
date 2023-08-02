#include<iostream>
#include<stdio.h>
#include "String.h"

using namespace std;

int main() 
{
	String S; // Padrao
    S.digitaString();
    S.imprimeString();
    cout << "Quantidade de caracteres: " << S.comprimento() << endl;

    char palavra[1000];
    printf("Digite sua string: \n");
    cin.getline(palavra, 1000);
    String S1(palavra); // Normal
    S1.imprimeString();
    cout << "Quantidade de caracteres: " << S1.comprimento() << endl;

    String S2 = S1; // Copia
    S2.imprimeString();
    cout << "Quantidade de caracteres: " << S2.comprimento() << endl;

    String S3;
    cin >> S3;
    cout << S3 << endl;
    printf("%s possui %d caracteres.\n", S3.getString(), S3.comprimento());

    S += S3;
    printf("%s possui %d caracteres.\n", S.getString(), S.comprimento());

    S += "Prof";
    printf("%s possui %d caracteres.\n", S.getString(), S.comprimento());

    S += 'X';
    printf("%s possui %d caracteres.\n", S.getString(), S.comprimento());
    
    return 0;
}