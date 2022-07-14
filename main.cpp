#include <iostream>
using namespace std;

int main() 
{
  int length, width, perimeter;
  cout << "Input the length :"; // prompt
  cin >> length; // input
  cout << "Input the width :";
  cin >> width;

  perimeter = (2*length)+ (2*width); // calcuation

  cout << "Perimeter :" << perimeter << endl;

  return 0; 
}