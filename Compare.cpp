#include<iostream>
#include<fstream>
#include"Compare.h"
Compare::Compare()
{
	Comparing();
}
void Compare::Comparing()
{
	std::fstream sub;
	for(int j=0;j<=3;j++)
	{
		sub.open("memory/subject.txt",std::ios::in);
		while(!sub.eof())
		{
			std::string find;
			getline(sub,find);
			if(find==breaking[j])
			{
				Subject=find;
				sub.close();
				break;
			}
		}
		sub.close();
	}
	std::fstream ver;
	for(int j=0;j<=8;j++)
	{
		ver.open("memory/verb.txt",std::ios::in);
		while(!ver.eof())
		{
			std::string find;
			getline(ver,find);
			if(find==breaking[j])
			{
				Verb=find;
				ver.close();
				break;
			}
		}
		ver.close();
	}
}
Compare::~Compare()
{
	
}