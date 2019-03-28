/*
 * main.cpp
 *
 *  Created on: Mar 28, 2019
 *      Author: NS
 */

#include "Array.h"
#include <iostream>

int main(int argc, char** argv){

	Array<int> array(10);
	for(int i = 0; i < 10; ++i)
		std::cout << array[i] << " ";
	std::cout << std::endl;


	Array<int>::Iterator i = array.begin();
	Array<int>::Iterator e = array.end();
	for(; i < e; ++i)
		std::cout << *i << " ";
	std::cout << std::endl;


	for(int i: array){
		std::cout << i << " ";
	}


	return EXIT_SUCCESS;
}


