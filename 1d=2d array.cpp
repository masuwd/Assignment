#include <iostream>
using namespace std;
int main ()
{
  int a[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
int b[4][4];
int k = 0; 
int i, j; 
for (i = 0; i < 4; i++)  
for (j = 0; j < 4; j++)      
b[i][j] = a[k++];
for (i = 0; i < 4; i++)
    
    {for (j = 0; j < 4; j++)
	
         cout << b[i][j] << '\t';
         cout << endl;}
  


return 0;

}


