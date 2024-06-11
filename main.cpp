#include <iostream>
#include <ctime>
#include "color.h"
/* Hadání tajného čísla */
using namespace std;
int main(int argc, char *argv[]) {
   system("chcp 65001>nul"); // Pro podporu UTF-8 v konzoli
   srand(time(0)); // Inicializace generátoru náhodných čísel s aktuálním časem
   int tajneCislo;
   int hracovoCislo;
   tajneCislo = rand() % 5 + 1; // Náhodné číslo od 1 do 5
   cout << "Zadej svuj tip na tajne cislo: ";
   cin >> hracovoCislo;
   if (tajneCislo == hracovoCislo){
      cout << "Spravne" << endl;
   }else cout << "Spatne" << tajneCislo << endl;
   return 0;
}