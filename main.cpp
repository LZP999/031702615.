#include<iostream>
#include<Windows.h>
#include<fstream>
#include"elevator1.h"
#include"passenger.h"
using namespace std;
int main(int argc,char *argv[])
{
	ifstream infile(argv[1], ios::in);
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
		if (a == 1)p[i].showfloor1(argv[2]);
		else if (a == 2)p[i].showfloor2(argv[3]);
		else if (a == 3)p[i].showfloor3(argv[4]);
	}
	infile.close();
	system("pause");
	return 0;
}