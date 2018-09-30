/*
 * main.cpp
 *
 *  Created on: Sep 30, 2018
 *      Author: raswantkoushikpeesapati
 */




//Calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

long alongVal(vector<long>ar)
{
	long int arCount = 0;

	for(int i =0; i < ar.size(); i++)
	{
		arCount += ar.at(i);
	}

	return arCount;
}

int main()
{
	int inputSize = 0;
	vector<long>inputarr;
	srand(time(0));
	long result = 0;
	long takeinput = 0;
	cout<<"Enter the array size :"<<endl;
	cin>>inputSize;

	for(int i = 0; i < inputSize; i++)
	{
		takeinput = (1 + rand() % 100000000000000);
		inputarr.push_back(takeinput);
	}

	cout<<"The elements are : "<<endl;
	for(int i =0; i < inputSize; i++)
	{
		cout<<inputarr.at(i)<<" ";
	}
	result = alongVal(inputarr);

	cout<<"\nResult : "<<result<<endl;

}
