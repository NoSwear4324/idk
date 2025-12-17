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
	book[d].push_back(info);
}

void Planner::delevent(Date d, string info)
{
	if (book.find(d) == book.end())
	{	
		cout << "Date not found!!" << endl;
	}
}

void Planner::findeventbydate(Date d) const
{

}

void Planner::findeventbyinfo(string info) const
{

}

void Planner::showinfo() const
{
	for (auto p = book.begin(); p != book.end(); p++ )
	{
		cout << p->first << endl;
		for (auto it = p->second.begin(); it != p->second.end(); it++)
		{
			cout << "\t" << *it << endl;
		}

	}
}
