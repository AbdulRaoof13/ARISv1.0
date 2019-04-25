#include<iostream>
#include"Compare.h"
class Identify: public Compare
{
	protected:
		std::string Sentence;
	public:
		Identify();
		void Identifying();
		~Identify();
};