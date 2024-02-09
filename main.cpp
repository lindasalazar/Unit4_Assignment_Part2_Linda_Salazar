//Linda Salazar, COSC 1436-57002, repl.it, this program will show ordinals followed by Hello.
#include <iostream>
#include "Input_Validation_Extended.h"
using namespace std;

int main() 
{
   int stop = 0;

   cout << "\nPlease enter a stopping point: ";
   stop = validateInt(stop); 

   for(int i = 1; i <= stop; i++)
   {
      if( (i % 10) == 1) 
      {
        cout << i << "st Hello" << endl; 
      }
      if( (i % 10) == 2)
      {
        cout << i << "nd Hello" << endl;
      }
      if( (i % 10) == 3)
      {
        cout << i << "rd Hello" << endl;
      }
      else if( ((i % 10) == 4) || ((i % 10) == 5) || ((i % 10) == 6) || ((i % 10) == 7) || ((i % 10) == 8) || ((i % 10) == 9) || ((i % 10) == 0)) 
      {
        cout << i << "th Hello" << endl; 
      }
   }
   return 0;
}