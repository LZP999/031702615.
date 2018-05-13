#pragma once
#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
class passenger
{
	public:
		int floor ;//记下所在的楼层；
		int sumtime;//记下所用的时间；
		int time = 0, from = 0, to = 0;
		passenger();
		~passenger();
		void run(int time,int from,int to);//显示乘客发出的指令；
		void showfloor1();//显示当前位置；
		void showfloor2();//显示当前位置；
		void showfloor3();//显示当前位置；
};

