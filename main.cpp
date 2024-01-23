//pridedame bibliotekas
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

void lentele() { //�alutin� funkcija
    ofstream fout("lentele.txt"); //failas, skirtas duomen� i�vedimui
    int suma; int temp;

    for(int i = 0; i < 4; i++)
    {
        suma = 0;
        for(int g = 0; g < 2; g++)//ciklas
        {
            temp = rand() % 10; //sukuriame atsitiktin� skai�i�
            fout << temp << " ";
            suma += temp; //sudedam pirmus du skai�ius
        }
        fout << suma << endl; //i�vedame sum�
    }

}

int isvedimas() { //�alutin� funkcija, kuri i�veda duomenis i� lentel�s
    ifstream fin("lentele.txt"); //atsidarome faila
    if (!fin) {
        cout << "Failas nerastas";
        return -1;
    }
    int kintamasis; //�sivedame kintam�j�

    for(int t = 0; t < 4; t++) //naujas ciklas, kuris dirba su stulpeliais
    {
        for(int f = 0; f < 3; f++) //ciklas, kuris dirba su skaitmenimis
        {
            fin >> kintamasis; //nuskaitome kintam�j� i� duomen� failo
            cout << kintamasis << " "; //i�vedame kintamaj� � ekran�
        }
        cout << endl;
    }

}


int main() //pagrindin� funkcija
{
    srand((unsigned) time(NULL)); //atsitiktinius skaicius generuojame pagal laiko seed'a

    lentele(); //iskvieciam lenteles funkcija
    isvedimas(); //iskvieciam antraja (isvedimo) funkcija

    return 0; //baigiame
}
