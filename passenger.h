#pragma once
#include<iostream>
#include<math.h>
#include<fstream>
using namespace std;
class passenger
{
	public:
		int floor ;//�������ڵ�¥�㣻
		int sumtime;//�������õ�ʱ�䣻
		int time = 0, from = 0, to = 0;
		passenger();
		~passenger();
		void run(int time,int from,int to);//��ʾ�˿ͷ�����ָ�
		void showfloor1();//��ʾ��ǰλ�ã�
		void showfloor2();//��ʾ��ǰλ�ã�
		void showfloor3();//��ʾ��ǰλ�ã�
};

