#include <iostream>
#include <fstream>

using namespace std;

ifstream skaitymas("Duomenys.txt"); //komanda duomenu nuskaitymui
ofstream irasymas("Rezultatai.txt"); //komanda duomenu rasymui


void nuskaitymasIsFailo(int &dienuSkaicius, double &SimoFondas, double &LinoFondas, double &MantoFondas, double SM[10], double LM[10], double MM[10]);
double KiekvienoIsleista(double KM[10], int n);

int main() {

    int dienuSkaicius, n;
    double SimoFondas, LinoFondas, MantoFondas, SM[10], LM[10], MM[10], KM[10], SimasIsleido ;

    nuskaitymasIsFailo(dienuSkaicius, SimoFondas, LinoFondas, MantoFondas, SM, LM, MM);

    cout<<dienuSkaicius<<"   "<<SimoFondas<<"   "<<LinoFondas<<"   "<<MantoFondas<<endl;


    SimasIsleido = KiekvienoIsleista(SM, dienuSkaicius);
    cout<<SimasIsleido<<endl;

    skaitymas.close();
    irasymas.close();
  return 0;
}
void nuskaitymasIsFailo(int &dienuSkaicius, double &SimoFondas, double &LinoFondas, double &MantoFondas, double SM[10], double LM[10], double MM[10]){

    skaitymas>>dienuSkaicius>>SimoFondas>>LinoFondas>>MantoFondas;
        for(int i=0; i>=30; i++){
            skaitymas>>SM[i]>>LM[i]>>MM[i];
        }
}

double KiekvienoIsleista(double KM[10], int n){
    float k = 0;
    for (int i = 0; i < n; i++)
     k = k + KM[i];
   return k;
}



