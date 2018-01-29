#include<iostream>
using namespace std;

int main()
{
	int i = 99;
	
	//writes bottle of beer lyrics, decrements, repeats
	while(i > 0)
	{
		//checks if 1 is singular and writes in correct format
		if (i == 1)
		{
			cout << i <<  " bottle of beer on the wall, " << i << " bottle of beer, take it down, pass it around, " << i << " bottle of beer on the wall.\n" ;
		}
		else
		{			
			cout << i <<  " bottles of beer on the wall, " << i << " bottles of beer, take one down, pass it around, " << i << " bottles of beer on the wall.\n" ;
		}
		i--;
		
	}

cin >> i;
return 0;
}	