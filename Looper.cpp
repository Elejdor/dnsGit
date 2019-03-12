#include <iostream>
#include <stdio>
#include <windows.h>

class Looper
{
	public:
	Looper()
	{
		Loop(10);
	}
	
	void Loop(int times)
	{
		while ( times --> 0 )
		{
			cout << times;
			sleep(100);
		}
	}
}