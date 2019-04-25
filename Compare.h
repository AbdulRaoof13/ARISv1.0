#include<iostream>
#include"Break.h"
class Compare: public Break
{
	protected:
		std::string Subject;
		std::string Verb;
	public:
		Compare();
		void Comparing();
		~Compare();
		
};