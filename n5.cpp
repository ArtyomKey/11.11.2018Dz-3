/* Напишите программу, заменяющую составные числа на их самые большие 
простые делители*/
#include <iostream>
#include <math.h>
using namespace std;

const char * primeTest(const int a){
    const int m = sqrt(a);
    if(a==1){
        return "unite";
    }
    
    if(a<=3){
        return "prime";
    }
    
    if(a%2==0){
        return "composite";
    }
     
    for(int i = 3; i <= m; i+=2){
        if(a%i==0) {
            return "composite";
        }
    }
    
    return "prime";
}
int main(){
  int number, otv, m;
  cin >> number;
  if(primeTest(number) == "prime"){
    otv = number;
  }else{
  for(int i = 2; i <= number/2; i++){
    if((number % i) == 0){
      if(primeTest(i) == "prime"){
        otv = i;
      }
    }
  }
  }
  cout << otv;
}