#include<iostream>
#include"ARIS.h"
int main()
{
	std::string name;
	std::cout<<"\n\nHey My Name is ARIS.";
	std::cout<<"\n\nWhats yours?\n\n";
	getline(std::cin,name);
	std::cout<<"\n\nHello "<<name<<" Nice to meet you.";
	std::cout<<"\n\nYou can Say Anything to me";
	while(1)
	{
		std::cout<<"\n";
		ARIS c;
		if(c.entered_sentence=="end")
		{
			return 0;
		}
	}
	return 0;
}