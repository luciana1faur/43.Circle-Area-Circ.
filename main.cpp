#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
  float razaCerc, aria, circumferinta;

  cout << "Find the area and circumference of any circle :" << endl;
  cout << "----------------------" << endl;

  cout << "Introduceti raza (1/2 din diametrul cercului): ";
  cin >> razaCerc;

  circumferinta = 2 * PI * razaCerc;
	aria = PI * (razaCerc * razaCerc);

  cout << "Aria cercului este: " << aria << endl;
  cout << "Circumferinta cercului este: " << circumferinta << endl;
  return 0;
}