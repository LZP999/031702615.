#include<iostream>
#include<Windows.h>
#include<fstream>
#include"elevator1.h"
#include"passenger.h"
using namespace std;
int main()
{
	ofstream outfile2("output2.txt", ios::out);
	ifstream infile("input.txt", ios::in);
	int n, time=0, from=0, to=0, a;
	passenger p[10000];
	elevator1 q[10000];
	infile >> n;
	passenger::passenger();
	for (int i = 0; i < n; i++)
	{
		infile >> p[i].time >> p[i].from >> p[i].to;
		p[i].run(p[i].time,p[i].from,p[i].to);
		a = q[i].Run(from, to);
		p[i].sumtime++;
		if (a == 1)p[i].showfloor1();
		else if (a == 2)p[i].showfloor2();
		else if (a == 3)p[i].showfloor3();
	}
	outfile2 << "ansjfhn" << endl;
	infile.close();
	system("pause");
	return 0;
}