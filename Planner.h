#pragma once
#include <string>
#include <iostream>
#include <map>
#include <list>
#include "Date.h"
using namespace std;

class Planner
{
private:
	map<Date, list<string>> book;
public:
	Planner();
	void addevent(Date d, string info);
	void delevent(Date d, string info);
	void findeventbydate(Date d)const;
	void findeventbyinfo(string info)const;
	void showinfo()const;
};