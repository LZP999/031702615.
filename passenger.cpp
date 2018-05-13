#include "passenger.h"
ofstream outfile1("output1.txt", ios::out);
ofstream outfile2("output2.txt", ios::out);
ofstream outfile3("output3.txt", ios::out);
passenger::passenger()
{
	sumtime = 0;//��ʼ������Ĳ�¥ʱ�䣻
	floor = 1;//��ʼ������Ĳ�¥λ�ã�
}
void passenger::run(int time, int from, int to)
{
	if (time > sumtime)
	{
		sumtime = time;
		sumtime += abs(from - to);//�������и�ָ�����ѵ�ʱ�䣻
	}
	else sumtime += abs(from - to);//�������и�ָ�����ѵ�ʱ�䣻
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
