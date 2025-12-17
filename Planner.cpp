#include "Planner.h"

Planner::Planner()
{
	book[Date()].push_back("C++");
	book[Date()].push_back("Movie");
	book[Date()-1].push_back("School");
	book[Date()].push_back("Math");
	book[Date(2025,12,21)].push_back("C#");
	book[Date(2008,05,23)].push_back("Birthday");
	book[Date(2025,12,31)].push_back("New year");
}

void Planner::addevent(Date d, string info)
{

}

void Planner::delevent(Date d, string info)
{

}

void Planner::findeventbydate(Date d) const
{

}

void Planner::findeventbyinfo(string info) const
{

}

void Planner::showinfo() const
{

}
