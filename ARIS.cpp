#include<iostream>
#include<fstream>
#include <stdlib.h>
#include <time.h>
#include"ARIS.h"
ARIS::ARIS()
{
	Respond();
	std::cout<<"\n"<<my_response;
}
void ARIS::Respond()
{
	if(Sentence=="Interrogative")
	{
		std::fstream yninterro;
		yninterro.open("Memory/YnInterro.txt",std::ios::in);
		while(!yninterro.eof())
		{
			std::string find;
			getline(yninterro,find);
			if(breaking[0]==find)
			{
				std::fstream ynans;
				ynans.open("Memory/ynAnswer.txt",std::ios::in);
				int random;
				srand (time(NULL));
				random = rand() % 7 + 1;
				int l=0;
				while(l<=random)
				{
					std::string ans;
					getline(ynans,ans);
					my_response=ans;
					l++;
				}
				ynans.close();
				break;
			}
		}
		yninterro.close();
		
		std::fstream altinterro;
		altinterro.open("Memory/AlterInterro.txt",std::ios::in);
		while(!altinterro.eof())
		{
			std::string find;
			getline(altinterro,find);
			if(breaking[0]==find)
			{
				std::fstream altans;
				altans.open("Memory/AlterAns.txt",std::ios::in);
				int random;
				srand (time(NULL));
				random = rand() % 4 + 1;
				int l=0;
				while(l<=random)
				{
					std::string ans;
					getline(altans,ans);
					my_response=ans;
					l++;
				}
				altans.close();
				break;
			}
		}
		altinterro.close();
		
		std::fstream whinterro;
		whinterro.open("Memory/WhInterro.txt",std::ios::in);
		while(!whinterro.eof())
		{
			std::string find;
			getline(whinterro,find);
			if(breaking[0]==find)
			{
				std::fstream memory;
				memory.open("Memory/memory.txt",std::ios::in);
				while(!memory.eof())
				{
					std::string find;
					getline(memory,find);
					if(find==entered_sentence)
					{
						std::string ans;
						getline(memory,ans);
						my_response=ans;
						return;
					}
				}
				memory.close();
				memory.open("Memory/memory.txt", std::ios::out | std::ios::app);
				memory<<std::endl<<entered_sentence<<std::endl;
				std::string userResponse;
				std::cout<<"\nSorry I didnt understand, can you tell me what should i respond with\n"<<std::endl;
				getline(std::cin, userResponse);
				memory<<userResponse<<std::endl;
				memory.close();
				break;
			}
		}
	}
	if(Sentence=="Optative")
	{
		std::fstream optans;
		optans.open("Memory/optativeans.txt",std::ios::in);
		int random;
		srand (time(NULL));
		random = rand() % 6 + 1;
		int l=0;
		while(l<=random)
		{
			std::string ans;
			getline(optans,ans);
			my_response=ans;
			l++;
		}
		optans.close();
		return;
	}
	if(Sentence=="Imperative")
	{
		std::fstream impans;
		impans.open("Memory/imperAns.txt",std::ios::in);
		int random;
		srand (time(NULL));
		random = rand() % 6 + 1;
		int l=0;
		while(l<=random)
		{
			std::string ans;
			getline(impans,ans);
			my_response=ans;
			l++;
		}
		impans.close();
		return;
	}
	if(Sentence=="Negative")
	{
		std::fstream negans;
		negans.open("Memory/NegAns.txt",std::ios::in);
		int random;
		srand (time(NULL));
		random = rand() % 11  + 1;
		int l=0;
		while(l<=random)
		{
			std::string ans;
			getline(negans,ans);
			my_response=ans;
			l++;
		}
		negans.close();
		return;
	}
	if(Sentence=="Statement")
	{
		std::fstream statans;
		statans.open("Memory/StatAns.txt",std::ios::in);
		int random;
		srand (time(NULL));
		random = rand() % 18  + 1;
		int l=0;
		while(l<=random)
		{
			std::string ans;
			getline(statans,ans);
			my_response=ans;
			l++;
		}
		statans.close();
		return;
	}
}
ARIS::~ARIS()
{

}