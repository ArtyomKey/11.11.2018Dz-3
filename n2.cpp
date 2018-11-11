/*Напишите программу, вычисляющую произведение цифр целого числа, чётность которых совпадает с чётностью последней цифры.*/
#include <iostream>
using namespace std;

int main() {
  int number, digit, mult, odd;
  cin >> number;
  mult = 1;
  odd = (number % 10) % 2;
  while(number != 0){
    digit = number % 10;
    if((digit % 2) == odd){
      mult *= digit;
    };
    number/=10;
  };
  cout << mult;
}