#include "elevator1.h"



elevator1::elevator1()
{
}
int elevator1::Run(int from, int to)//�ж�Ӧ���Ĳ�����ȥ�ӣ�
{
	if (from % 2 != 0 && to % 2 != 0)return('1');
	if ((from == 1 && to % 2 == 0) || (from % 2 == 0 && to == 1) || (from % 2 == 0 && to % 2 == 0))return('3');
	else return('2');
}
elevator1::~elevator1()
{
}
