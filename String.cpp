#include <iostream>
#include <string.h>
#include <stdio.h>
#include "String.h"

using namespace std;

    istream & operator>>(istream & entrada, String &obj)
    {
        delete [] obj.str;
        
        char s1[1000];
        entrada.getline(s1, 1000);

        obj.str = new char[strlen(s1) + 1];
        strcpy(obj.str, s1);

        return entrada;
    }

    ostream & operator<<(ostream & saida, const String &obj)
    {
        saida << obj.str;
        return saida;
    }

    String& String :: operator = (const String& obj)
    {
        if(&obj != this){
            this->str = new char [strlen(obj.str) + 1];
            strcpy(this->str, obj.str);
            return *this;
        }
    }

    bool String :: operator == (const String& obj)
    {
        bool valor = strcmp(this->str, obj.str);
        return valor;
    }

    bool String :: operator != (const String& obj)
    {
        bool valor = strcmp(this->str, obj.str);
        return valor;
    }

    bool String :: operator > (const String& obj)
    {
        if(strcmp(this->str, obj.str) > 0)
            return true;
        else
            return false;
    }

    bool String :: operator < (const String& obj)
    {
        if(strcmp(this->str, obj.str) < 0)
            return true;
        else
            return false;
    }

    void String :: operator += (const String& obj)
    {
        char *aux;
        aux = new char[strlen(this->str) + strlen(obj.str) + 1];

        strcpy(aux, this->str);
        strcat(aux, obj.str);

        delete [] this->str;
        this->str = new char[strlen(aux) + 1];
        strcpy(this->str, aux);

        delete [] aux;
    }

    void String :: operator += (const char* s)
    {
        char *aux;
        aux = new char[strlen(this->str) + strlen(s) + 1];

        strcpy(aux, this->str);
        strcat(aux, s);

        delete [] this->str;
        this->str = new char[strlen(aux) + 1];
        strcpy(this->str, aux);

        delete [] aux;
    }

    void String :: operator += (char c)
    {
        char *aux;
        aux = new char[strlen(this->str) + 1 + 1];

        strcpy(aux, this->str);
        aux[strlen(aux)] = c;
        aux[strlen(aux) + 1] = '\0';

        delete [] this->str;
        this->str = new char[strlen(aux) + 1];
        strcpy(this->str, aux);

        delete [] aux;
    }

    String :: String()
    {
        cout << "Construtor padrao" << endl;
        this->str = new char[1];
        this->str[0] = '\0';
    }

    String :: String(const char* s)
    {
        cout << "Construtor normal" << endl;
        this->str = new char[strlen(s) + 1];
        strcpy(this->str, s);
    }

    String :: String(const String& obj)
    {
        cout << "Construtor de copia" << endl;
        this->str = new char[strlen(obj.this->str) + 1];
        strcpy(this->str, obj.this->str);
    }

    String :: ~String()
    {
        cout << "Destrutor" << endl;
        delete [] this->str;
    }

    void String :: setString(const char* s)
    {
        delete [] this->str;
        this->str = new char[strlen(s) + 1];
        strcpy(this->str, s);
    }

    char* String :: getString()
    {
        return this->str;
    }

    void String :: digitaString()
    {
        char s[1000];
        printf("Digite sua string: \n");
        cin.getline(s, 1000);

        delete [] this->str;
        this->str = new char[strlen(s) + 1];
        strcpy(this->str, s);
    }

    int String :: comprimento()
    {
        return strlen(this->str);
    }
    
    void String :: imprimeString()
    {
        printf("%s\n", this->str);
        // cout << str << endl;
    }




