#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
   
   ofstream out{"abc.txt"};
   if (out)
   {
	   out << a << " " << b << " " << c << endl;
	   out.close();
   }
   else
   {
	   cout << "Error: could not open abc.txt" << endl;
   }
 
   return 0;
}
