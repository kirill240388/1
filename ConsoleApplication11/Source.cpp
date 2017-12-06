#include<stdlib.h>
#include<iostream>
#include<locale.h>
#include<stdio.h>
using namespace std;
int main()
{

	setlocale(LC_ALL, "Russian");
	int task;
	cout << "¬ведите є задани€" << "\n";
	cin >> task;
	switch (task)
	{
	case 1:
	{
		int p, st, d, s;
		cout << "¬ведите продолжительность разговора" << "\n";
		cin >> p;
		cout << "¬ведите день недели" << "\n";
		cin >> d;
		cout << "¬ведите стоимость разговора" << "\n";
		cin >> st;
		if (d > 5)
		{
			s = p*st*0.8;
			cout << s << "\n";
		}
		else
		{
			s = p*st;
			cout << s << "\n";
		}

	}
	case 2:
	{
		int s, sk;
		cin >> s;
		if ((s > 500) && (s < 1000))
		{
			sk = s*0.95;
			cout << sk << "\n";
		}
		else if (s > 1000)
		{
			sk = s*0.9;
			cout << sk << "\n";
		}
	}
	case 3:
	{
		int m;
		cin >> m;
		if ((m > 2) && (m < 6))
		{
			cout << "Vesna" << "\n";
		}
		else if ((m > 5) && (m < 9))
		{
			cout << "Leto" << "\n";
		}
		else if ((m > 8) && (m < 12))
		{
			cout << "Osen" << "\n";
		}
		else
		{
			cout << "Zima" << "\n";
		}
	}
	case 4:
	{
		int a, b, c;
		cin >> a;
		cin >> b;
		cin >> c;
		if (((a == b) || ((a == c)) || (b == c)))
		{
			cout << "ok" << "\n";
		}
		else
		{
			cout << "Chisla ne ravny" << "\n";
		}
	}
	case 5:
	{
		int t;
		cin >> t;
		if ((t > 5) && (t < 13))
		{
			cout << "Utro" << "\n";
		}
		else if ((t>11)&&(t<19))
		{
			cout << "Den" << "\n";
		}
		else if ((t > 17) && (t <= 24))
		{
			cout << "Vecher" << "\n";
		}
		else
		{
			cout << "Noch" << "\n";
		}
	}
	break; 
	{

	}


		system("pause");
		return 0;
	}
}