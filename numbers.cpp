#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   char a;
   int b;
   float c; 
   float d;
   float numbers = 0;
   int count = 0;
   float average;
   
   
	   
   ifstream in{"bonus"};
   
   if (in)
   {
	   for (int i=0; i<31; i++)
		{
	   in >> a;
	   in >> b;
	   in >> c;
	   in >> d;
	   
			if (a == 'G')
			{
	   
	   numbers += b;
	   
	   count+=1;
	   
	   cout << a << " " << b << " " << c << " " << d << endl;
	   
	   
			}
		
		}
		average = numbers/count;
		cout << endl << "The average of all integers are " << average << endl<< endl;
	}
   else
   {
	   cout << "Error reading from file bonus" << endl;
   
}
   
   
 
   return 0;
}
