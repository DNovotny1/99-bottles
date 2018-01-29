#include<iostream>
using namespace std;

int main()
{
	int i = 99;
	
	//writes bottle of beer, decrements, repeats
	while(i > 1)
	{
		cout << i <<  " bottles of beer on the wall, " << i << " bottles of beer, take one down, pass it around, " << i << " bottles of beer on the wall.\n" ;
		i--;
	}
//writes lyric one more time for singular format 
cout << i <<  " bottle of beer on the wall, " << i << " bottle of beer, take it down, pass it around, " << i << " bottle of beer on the wall.\n" ;
cin >> i;
return 0;
}	