#ifndef STRING_H
#define STRING_H
#include <iostream> //Necessario para ostream e istream

using namespace std;

class String{
    friend istream& operator>>(istream&, String&);
    friend ostream& operator<<(ostream&, const String&);
public:
	String(); // construtor padrao
    String(const char*); // construtor normal
    String(const String&); // construtor de copia
    ~String();
    void setString(const char*);
    char* getString();
    void digitaString();
	int comprimento();
    void imprimeString();

    String & operator = (const String&);
    bool operator == (const String&);
    bool operator != (const String&);
    bool operator > (const String&);
    bool operator < (const String&);

    void operator += (const String&);
    void operator += (const char*);
    void operator += (char);

private:
	char* str;

};
#endif