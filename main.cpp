//pridedame bibliotekas
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

void lentele() { //ðalutinë funkcija
    ofstream fout("lentele.txt"); //failas, skirtas duomenø iðvedimui
    int suma; int temp;

    for(int i = 0; i < 4; i++)
    {
        suma = 0;
        for(int g = 0; g < 2; g++)//ciklas
        {
            temp = rand() % 10; //sukuriame atsitiktiná skaièiø
            fout << temp << " ";
            suma += temp; //sudedam pirmus du skaièius
        }
        fout << suma << endl; //iðvedame sumà
    }

}

int isvedimas() { //ðalutinë funkcija, kuri iðveda duomenis ið lentelës
    ifstream fin("lentele.txt"); //atsidarome faila
    if (!fin) {
        cout << "Failas nerastas";
        return -1;
    }
    int kintamasis; //ásivedame kintamàjá

    for(int t = 0; t < 4; t++) //naujas ciklas, kuris dirba su stulpeliais
    {
        for(int f = 0; f < 3; f++) //ciklas, kuris dirba su skaitmenimis
        {
            fin >> kintamasis; //nuskaitome kintamàjá ið duomenø failo
            cout << kintamasis << " "; //iðvedame kintamajá á ekranà
        }
        cout << endl;
    }

}


int main() //pagrindinë funkcija
{
    srand((unsigned) time(NULL)); //atsitiktinius skaicius generuojame pagal laiko seed'a

    lentele(); //iskvieciam lenteles funkcija
    isvedimas(); //iskvieciam antraja (isvedimo) funkcija

    return 0; //baigiame
}
