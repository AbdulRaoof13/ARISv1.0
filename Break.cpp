#include<iostream>
#include<string.h>
#include"Break.h"
Break::Break()
{
	Breaking();
}
void Break::Breaking()
{
	std::cout<<"\n";
	getline(std::cin,entered_sentence);
	if(entered_sentence=="end")
	{
		return;
	}
	int c;
    i=entered_sentence.length();
    int n=0;
    int k=0;
    for(int j=0;j<=i;j++)
    {
        if(entered_sentence[j]==' ')
        {
            c=j-k;
            breaking[n]=entered_sentence.substr(k,c);
            //std::cout<<"\n"<<k<<"\n"<<j;
            //std::cout<<"\n\n"<<breaking[n];
            k=j+1;
            n++;

        }
    }
    breaking[n]=entered_sentence.substr(k,i);
}
Break::~Break()
{
	//std::cout<<"\n\nGood Bye!!!!!";
}