#include <iostream>
 
using namespace std;
 
int main() {
 
    float x = 0, y = 0;
    
    cin >> x;
    cin >> y;
    
    x = x/y;
    
    cout.precision (3);
    cout << fixed << x << " km/l" << endl; 
 
    return 0;
}