#include <iostream>
using namespace std;

float FahrenheitToCelsius(float f)
{

  float c = (f - 32) * (5.0 / 9.0);
  return c;
}

int main() {
  float fahrenheit = 10 ; 
  float celsius = FahrenheitToCelsius(fahrenheit);
  cout << fahrenheit << "°F = " << celsius << "°C" << endl;

    return 0;
}
//진짜 공식
/*Formula: °F = (°C × 9/5) + 32 or °F = (°C × 1.8) + 32
Step 1: Multiply the temperature in Celsius by \(1.8\) (or \(9/5\)).
Step 2: Add \(32\) 
to the result from Step 1 to get the temperature in Fahrenheit. 


Example:To convert \(25\)°C to Fahrenheit:
Multiply \(25\) by \(1.8\): \(25\times 1.8=45\).
Add \(32\): \(45+32=77\).Therefore, \(25\)°C is equal to \(77\)°F. 
*/
