#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		int n;
		char s;
		cin >> n >> s;
		while (n>0)
		{
			cout << s;
			n--;
		}
	}
	break;
	case 2:
	{
		int n;
		char s;
		cin >> n >> s;
		while (n>1)
		{
			cout << s << ", ";
			n--;
		}
		cout << s<<".";
	}
	break;
	case 3:
	{
		unsigned int n, y=0, k=0;
		cin >> n;
		while (n != 0)
		{
			k = n % 10;
			n = n / 10;
			y = y*10+k;
		}
		cout << y<< endl;

	}
	break;
	case 4:
	{
		unsigned int n, y = 0, k = 0, z = 0;
		cin >> n;
		z = n;
		while (n != 0)
		{
			k = n % 10;
			n = n / 10;
			y = y * 10 + k;
		}
		if (z == y) cout << "PALINDROME" << endl;
		else cout << "NOT PALINDROME" << endl;

	}
	break;
	case 5:
	{
		unsigned int n, x = 0, y = 1, s = 0, p = 1;
		cin >> n;
		while (y != 0)
		{
			y = n / 10;
			x = n % 10;
			n = n / 10;
			s = s + x;
			p = p*x;
		}
		cout << s << " " << p;
	}
	break;
	case 6:
	{

	}
	break;
	case 7:
	{

	}
	break;
	case 8:
	{

	}
	break;
	case 9:
	{

	}
	break;
	case 10:
	{

	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}