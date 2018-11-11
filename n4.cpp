/*Напишите программу, находящую сумму простых элементов массива.*/
#include <iostream>
#include <math.h>
using namespace std;
int primeTest(int a){
    const int m = sqrt(a);
    if(a==1){
        return 0;
    }
    
    if (a<=3){
        return a;
    }
    
    if (a%2==0){
        return 0;
    }
     
    for(int i = 3; i <= m; i+=2){
        if (a%i==0) {
            return 0;
        }
    }
    
    return a;
}
int main() {
  int n, sum;
  cin >> n;
  int A[n];
  sum = 0;
  for(int i = 0; i < n; i++){
    cin >> A[i];
    if(primeTest(A[i]) == A[i]){
      sum += A[i];
    }
  }
  cout << sum;
}