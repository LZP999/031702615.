#include "passenger.h"
ofstream outfile1("output1.txt", ios::out);
ofstream outfile2("output2.txt", ios::out);
ofstream outfile3("output3.txt", ios::out);
passenger::passenger()
{
	sumtime = 0;//初始化最初的层楼时间；
	floor = 1;//初始化最初的层楼位置；
}
void passenger::run(int time, int from, int to)
{
	if (time > sumtime)
	{
		sumtime = time;
		sumtime += abs(from - to);//计算运行该指令所费的时间；
	}
	else sumtime += abs(from - to);//计算运行该指令所费的时间；
	floor = to;
}
void passenger::showfloor1()
{
	outfile1 << sumtime << " " << floor << endl;
	outfile1.close();
}
void passenger::showfloor2()
{
	outfile2 << sumtime << " " << floor << endl;
	outfile2.close();
}
void passenger::showfloor3()
{
	outfile3 << sumtime << " " << floor << endl;
	outfile3.close();
}
passenger::~passenger()
{
}
