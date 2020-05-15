#include <iostream>
using namespace std;

int main()
{
   int d[5];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> d[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(d + i);

   return 0;
}
