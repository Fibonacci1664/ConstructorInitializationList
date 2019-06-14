/*
 * Person.cpp
 *
 *  Created on: 13 Jun 2019
 *      Author: Dave
 */

#include "Person.h"
#include<sstream>

Person::Person()
{
	name = "";
	age = 0;
}

//Person::Person(): name("Unnamed"), age(0)
//{
//	// Another default constructor.
//}

//Person::Person(string name, int age)
//{
//	this->name = name;
//	this->age = age;
//
//	//cout << "The memory location of the Person object is: "<< this << endl;
//}

Person::Person(string name, int age): name(name), age(age)	// This could be done inline.
{
	// This is another way of initializing a constructor instead of using the 'this' keyword.

	// It is known as a constructor initialization list.
}

Person::~Person()
{
	// TODO Auto-generated destructor stub
}


string Person::toString()
{
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << ", Age: ";
	ss << age;

	return ss.str();
}
