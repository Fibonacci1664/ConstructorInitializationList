/*
 * Person.h
 *
 *  Created on: 13 Jun 2019
 *      Author: Dave
 */

#ifndef PERSON_H_
#define PERSON_H_

#include<iostream>

using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person();
	Person(string name, int age);
	virtual ~Person();

	string toString();
};

#endif /* PERSON_H_ */
