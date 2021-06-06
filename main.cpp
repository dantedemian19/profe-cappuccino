#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
using namespace std;
struct alumno{
string nombre;
int nota[3];
float prom;
};

int main()
{  ofstream hdp;
   int c;
   int t=0;
   int x;
   alumno vec[5];
   hdp.open("hdp.txt");
   if(hdp.fail()){
    cout<< "No se pudo :(";
    exit(1);
   }
   cout << "Ingrese nombre: ";
   cin >> vec[1].nombre;
   hdp << vec[1].nombre<<" ";

   t=0;
   while(t <3){
   cout << "Ingrese nota "<<t<<": ";
   cin >> vec[1].nota[t];
   hdp << vec[1].nota[t]<<" ";
   t=t+1;
   }
   vec[1].prom = (vec[1].nota[0]+vec[1].nota[1]vec[1].nota[2])/3;
   hdp << vec[1].prom<<" ";
   }
