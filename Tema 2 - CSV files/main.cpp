#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    double x2,y2;
    string x;
    double x1;
    string y;
    double y1;
    string nume;
    string judet;
    string judet_auto;
    string p;
    int p1;
    string regiune;

    ifstream in;
    ofstream out;
    in.open("localitatiRO.csv");
    out.open("vecini.csv");

    cout << "x = ";
    cin >> x2;
    cout << "y = ";
    cin >> y2;

    while(in.good())
    {
        getline(in, x, ' ');
        if(!x.empty())
            x1 = stod(x);
        getline(in, y, ' ');
        if(!y.empty())
            y1 = stod(y);
        getline(in, nume, ' ');
        getline(in, judet, ' ');
        getline(in, judet_auto, ' ');
        getline(in, p, ' ');
        p1 = stoi(p);
        getline(in, regiune, '\n');
        if((((x2 - 0.5) <= x1) && (x1 <= (x2 + 0.5))) && (((y2 - 0.5) <= y1) && (y1 <= (y2 + 0.5))) && (p1 > 1000))
            out << x << "," << y << "," << nume << "," << judet << "," << judet_auto << "," << p << "," << regiune << endl;
    }
    return 0;
}
