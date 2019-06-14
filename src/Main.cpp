/*
 * Main.cpp
 *
 *  Created on: 13 Jun 2019
 *      Author: Dave
 */

#include<iostream>
#include "Person.h"

using namespace std;

int main()
{
	Person person1;

	cout << person1.toString() << " Memory address of person1: " << &person1 << endl;

	Person person2("Bob", 38);

	cout << person2.toString() << " Memory address of person2: " << &person2 << endl;

	Person person3("Andy", 56);

	cout << person3.toString() << " Memory address of person3: " << &person3 << endl;





	return 0;
}


