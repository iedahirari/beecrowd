#include <iostream>
 
using namespace std;
 
int main() {
 
    int a = 0, b = 0, c = 0, maiorAB, maior;
	cin>> a;
	cin>> b;
	cin>> c;
	maiorAB = (a + b + abs(a-b)) / 2;
	maior = (maiorAB + c + abs(maiorAB - c))/2;
	cout<< maior <<" eh o maior"<< endl;
	
    return 0;
}