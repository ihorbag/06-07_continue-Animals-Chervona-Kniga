#pragma once

#include<iostream>
using namespace std;

class Animals 
{protected:
	string name;
	string data;
	int kol;
public:
	Animals(){}
	virtual void Set() = 0;
	virtual void Print() = 0;
};

class Bird :  public Animals
{ 
public:

	Bird():Animals() {}
};
class Plazun : virtual public Animals
{
public:
	Plazun() :Animals() {}
};

class Savec : virtual public Animals
{
public:
	Savec() :Animals() {}
};