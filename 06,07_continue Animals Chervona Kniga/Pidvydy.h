#pragma once
#include "Animals.h"
#include<string.h>
class Jastrub:public Bird
{
public:
	Jastrub():Bird() {}
	virtual void Set(string _name, string _data,int _kol)
	{
		name = _name;
		data = _data;
		kol = _kol;
	}
	virtual void Print()
	{
		cout << name << " | " << data << " | " << kol << " | \n";
	}
};

class Sokil:public Bird
{
public:
	Sokil() :Bird() {}
	virtual void Set(string _name, string _data, int _kol)
	{
		name = _name;
		data = _data;
		kol = _kol;
	}
	virtual void Print()
	{
		cout << name << " | " << data << " | " << kol << " | \n";
	}
};

class Vudzh:public Plazun
{
public:
	Vudzh() :Plazun() {}
	virtual void Set(string _name, string _data, int _kol)
	{
		name = _name;
		data = _data;
		kol = _kol;
	}
	virtual void Print()
	{
		cout << name << " | " << data << " | " << kol << " | \n";
	}
};

class Gadiuka :public Plazun
{
public:
	Gadiuka() :Plazun() {}
	virtual void Set(string _name, string _data, int _kol)
	{
		name = _name;
		data = _data;
		kol = _kol;
	}
	virtual void Print()
	{
		cout << name << " | " << data << " | " << kol << " | \n";
	}
};

class Kunica :public Savec
{
public:
	Kunica() :Savec() {}
	virtual void Set(string _name, string _data, int _kol)
	{
		name = _name;
		data = _data;
		kol = _kol;
	}
	virtual void Print()
	{
		cout << name << " | " << data << " | " << kol << " | \n";
	}
};

class Kotiachi :public Savec
{
public:
	Kotiachi() :Savec() {}
	virtual void Set(string _name, string _data, int _kol)
	{
		name = _name;
		data = _data;
		kol = _kol;
	}
	virtual void Print()
	{
		cout << name << " | " << data << " | " << kol << " | \n";
	}
};