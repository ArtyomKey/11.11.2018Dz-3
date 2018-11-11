
/*Напишите программу, вычисляющую сумму нечетных цифр целого числа.*/
#include <iostream>
using namespace std;

int main() {
  int number, digit, k;
  cin >> number;
  k = 0;
  while(number !=0){
    digit= number % 10;
    if(digit % 2 != 0){
      k = k + digit;
    };
    number/=10;
  };
  cout << k;
}