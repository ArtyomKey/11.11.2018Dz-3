/*Напишите эффективную функцию, вычисляющую последнюю цифру числа,являющегося результатом возведения числа A в степень B. Числа A и B помещаются в тип long long. Количество действий выполняемых программой не должно превышать С1*(ln B)+ C2, где С1 и С2 – некоторые константы*/
#include <iostream>
#include <math.h>
using namespace std;
int digit(const long long a, const long long b){
  const static int A[10][4] = {{0,0,0,0},
                               {1,1,1,1},
                               {6,2,4,8},
                               {1,3,9,7},
                               {6,4,6,4},
                               {5,5,5,5},
                               {6,6,6,6},
                               {1,7,9,3},
                               {6,8,4,2},
                               {1,9,1,9}
                              };
  if (b == 0){
    return 1;
  }
  return A[a % 10][b % 4];
    
}
int main(){
  long long base, degr;
  cin >> base >> degr;
  cout << digit(base, degr);
}