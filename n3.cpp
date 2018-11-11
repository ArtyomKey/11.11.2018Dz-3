/*Напишите программу, вычисляющую биномиальный коэффициент из n по к. В программе нельзя использовать числа, превышающие итоговое значение.*/
#include <iostream>
using namespace std;

long binomKoef(const int n, const int k) {
  if (((n==1) and (k==1)) or ((n==1) and (k==2))){
    return 1;
  }
  if((k == 1) or (k == n+1)){
    return 1;
  }
  return (binomKoef(n-1, k-1) + binomKoef(n-1, k));
};
int main() {
 int n, k;
 long ans;
 cin >> n >> k;
 ans = binomKoef(n, k);
 cout << ans;
 return 0;
}