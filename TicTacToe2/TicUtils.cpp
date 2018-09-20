#include<iostream>
#include"TicUtils.h"
using namespace std;

cell translateCell(int input)
{
	cell rtnCell;
	rtnCell.x = input % 3;
	rtnCell.y = input / 3;

	return rtnCell;
}
