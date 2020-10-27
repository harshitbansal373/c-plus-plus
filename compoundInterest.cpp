#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double p,r,t;
    double c;
   cout << "Enter principal: ";
   cin >> p;
   cout << "Enter rate: ";
   cin >> r;
   cout << "Enter time: ";
   cin >> t;

   c = p*(pow((1+r/100), t));

   cout << "Compound interest= " << c;

    return 0;
}
