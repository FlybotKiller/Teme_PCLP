#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

int main()
{
    //Program 1
  /*  char s[100]; //Declar sir de caractere
    int v; //Declar variabila v de tip int care va aparea la inceputul mesajului codificat
    char c; //Declar variabila c de tip char care va prelua pe rand fiecare litera din sir
    char c1; //Declar variabila c1 de tip char care va codifica fiecare litera si va prelua noua valoare
    int i = 0; //Declar variabila i de tip int care va prelua rolul contorului pt instructiunea while
    cin.getline(s,100); //Introduc de la tastatura sirul, incluzand spatiile care se va opri la enter
    cout << "v = ";
    cin >> v; //Introduc de la tastatura valoarea lui v
    ofstream codificare; //Declar stream-ul de iesire
    codificare.open("cod.txt"); //Asociez fisierul "cod.txt" stream-ului de iesire
    while(s[i] != '\0') //Instructiune ce parcurge fiecare element al sirului de la primul pana la valoarea NULL
    {                   //care se afla la finalul fiecarui sir de caractere
        c = s[i]; //c primeste litera din sir situata in spatiul s[i]
        c1 = (char)((c + v) % 256); //Formula de codificare
        s[i] = c1; //Spatiului s[i] din sir i se aloca valoarea codificata din c1
        i++; //Instructiunea trece la urmatoarea litera
    }
    codificare << v << s; //Afiseaza cifra v impreuna cu mesajul codificat in fisierul "cod.txt" */

    //Program 2
    char s[100]; //Declar sir de caractere
    int v; //Declar variabila v de tip int care va fi utilizata in algoritmul de decodificare
    char c; //Declar variabila c de tip char care va prelua pe rand fiecare litera codificata din sir
    char c1; //Declar variabila c1 de tip char care va decodifica fiecare litera si va prelua noua valoare
    int i = 0; //Declar variabila i de tip int care va prelua rolul contorului pt instructiunea while
    cout << "v = ";
    cin >> v; //Introduc de la tastatura valoarea lui v
    ifstream decodificare; //Declar stream-ul de intrare
    decodificare.open("cod.txt"); //Asociez fisierul "cod.txt" stream-ului de intrare
    decodificare >> s; //Textul codificat este preluat din fisier si asociat sirului s
    strcpy(s, s+i+1); //Copiez in sirul s mesajul codificat evitand valoarea v ce aparea in fata acestuia
    while(s[i] != '\0') //Instructiune ce parcurge fiecare element al sirului codificat de la primul pana la valoarea NULL
    {
        c1 = s[i]; //c primeste litera codificata din sir situata in spatiul s[i]
        c = (char)((256 + c1 - v) % 256); //Formula de decodificare
        s[i] = c; //Spatiului s[i] din sir i se aloca valoarea decodificata din c1
        i++; //Instructiunea trece la urmatoarea litera codificata

    }
    cout << s; //Afiseaza pe ecran mesajul decodificat, fara cifra v
    return 0;
}
