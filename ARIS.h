#include<iostream>
#include"Identify.h"
class ARIS: public Identify
{
	protected:
		std::string my_response;
	public:
		ARIS();
		void Respond();
		~ARIS();
};