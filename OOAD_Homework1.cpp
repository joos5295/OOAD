#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Shape
{
protected:
	int x;
	int y;
	int z;
	string name;

public:
	void display()
	{
		cout << name << endl;
	}
};

class Triangle : public Shape
{
private:
	int s1;
	int s2;
	int s3;

public:
	Triangle()
	{
		name = "Triangle";
	}
};

class Circle : public Shape
{
private:
	int r;
public:
	Circle()
	{
		name = "Circle";
	}
};

class Square : public Shape
{
private:
	int s;
public:
	Square()
	{
		name = "Square";
	}
};

class Database
{
private:
	vector<Shape> shapelist;
	int listSize;
public:
	Database(vector<Shape> sl)
	{
		shapelist = sl;
		listSize = shapelist.size();
	}
	void displaySize()
	{
		cout << listSize << endl;
	}
	void displayList()
	{
		for (int i = 0; i < listSize; i++)
		{
			shapelist.at(i).display();
		}
	}
};

int main()
{
	vector<Shape> vect;

	Shape t1 = Triangle();
	Shape t2 = Triangle();
	Shape t3 = Triangle();

	Shape c1 = Circle();

	Shape s1 = Square();
	Shape s2 = Square();
	Shape s3 = Square();
	Shape s4 = Square();

	vect.push_back(t1);
	vect.push_back(c1);
	vect.push_back(t2);
	vect.push_back(s1);
	vect.push_back(s2);
	vect.push_back(t3);
	vect.push_back(s3);
	vect.push_back(s4);

	Database DB(vect);

	DB.displaySize();
	DB.displayList();
}
