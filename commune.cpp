#include "commune.h"

using std::cout;
using std::cin;
using std::endl;

int main( )
{

   cout << "Hello Communers!" << endl;
   
   
   std::vector<std::string> command_vector;
   std::string str;
   while ( 1 )
   {
      { //console
         command_vector.clear();
         cout << ">" << endl;
	      cin.clear();
	      cin.sync();
         std::getline(cin,str,'\n');   
        
         { //split into vector
	         int i = 0;
            const char delimiter = '.';
            unsigned long position = str.find(delimiter);
            while (position != std::string::npos) //npos = -1
            {
               command_vector.push_back(str.substr(i, position -i));
               i = ++position;
               position = str.find(delimiter,position);
               cout << "position: " << position << " str: " << str << " sub: " << str.substr(i, str.length())                   << endl;
            }
            if (position == std::string::npos) 
            {
               command_vector.push_back(str.substr(i, str.length()));
            }
         }
         cout << "command: " << endl;
         { //print vector
            for( int i = 0; i < command_vector.size(); ++i)
            {
               cout  << command_vector[i] << " ";
            }
            cout << endl;
         }  
      }
   }

   return 0;
}
