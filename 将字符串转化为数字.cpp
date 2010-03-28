
#include "stdafx.h"
#include<iostream>
using namespace std;

int ChangeToNum(char x)
{
	if(x>57||x<48)
		return -1;
	x-=48;
	return x;
}

int AccuNum(char* x)
{
	bool sign=true;
	int result=0;
	if('-'==*x)
	{
		sign=false;
		x++;
	}
	while(*x!='\0')
	{
		if(ChangeToNum(*x)<0)
		{
			return -999999999;
		}
		result+=ChangeToNum(*x);
		x++;
		if(*x!='\0')
			result*=10;
	}
	if(!sign)
		result=-result;
	return result;
}

int _tmain(int argc, _TCHAR* argv[])
{
	char source[10]="-234560";
	int result=AccuNum(source);
	cout<<result<<endl;
	return 0;
}

