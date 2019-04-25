#include<iostream>
#include"Identify.h"
#include<fstream>
Identify::Identify()
{
	Identifying();
}
void Identify::Identifying()
{
	std::fstream interro;
	interro.open("Memory/interrogative.txt",std::ios::in);
	while(!interro.eof())
	{
		std::string find;
		getline(interro,find);
		if(breaking[0]==find)
		{
			Sentence="Interrogative";
			interro.close();
			return;
		}
	}
	std::fstream imper;
	imper.open("Memory/imperative.txt",std::ios::in);
	while(!imper.eof())
	{
		std::string find;
		getline(imper,find);
		if(breaking[0]==find || breaking[0]==Verb)
		{
			Sentence="Imperative";
			imper.close();
			return;
		}
	}
	std::fstream opta;
	opta.open("Memory/optative.txt",std::ios::in);
	while(!opta.eof())
	{
		std::string find;
		getline(opta,find);
		if(breaking[0]==find || breaking[0]==Verb)
		{
			Sentence="Optative";
			opta.close();
			return;
		}
	}
	std::fstream nega;
	for(int j=0;j<=10;j++)
	{
		nega.open("Memory/negative.txt",std::ios::in);
		while(!nega.eof())
		{
			std::string find;
			getline(nega,find);
			if(breaking[j]==find)
			{
				Sentence="Negative";
				nega.close();
				return;
			}
		}
		nega.close();
	}
	Sentence="Statement";
}
Identify::~Identify()
{

}