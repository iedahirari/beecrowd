#include<stdio.h>
#include <iostream>
 
using namespace std;
 
int main() {
 
   long long int Fib [61];
   int t;
   int n;
   int i;

   Fib [0] = 0;
   Fib [1] = 1;

   for(i=2; i <= 60; i++)
   {
       Fib [i] = Fib [i-1] + Fib [i-2];
   }

   cin >> t;

   for(i=1; i <=t; i++)
   {
      cin >> n;
      cout << "Fib(" <<n<<") = " << Fib [n] << endl;
   }
 
    return 0;
}