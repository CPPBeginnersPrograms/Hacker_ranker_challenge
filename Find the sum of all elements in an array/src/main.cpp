/*
 * main.cpp
 *
 *  Created on: Sep 30, 2018
 *      Author: raswantkoushikpeesapati
 */


//Given an array of integers, find the sum of its elements.

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int arraySum(vector<int>arr)
{
	long int sumVal = 0;

	for(int i =0; i < arr.size(); i++)
	{
		sumVal += arr.at(i);
	}

	return sumVal;
}

int main()
{
	srand(time(0));
	int inputSize =0;
	int takeinput =0;
	vector<int>inputarr;

	cout<<"Enter the array size : "<<endl;
	cin>> inputSize;

	for(int i = 0 ; i < inputSize; i++)
	{
		takeinput = (1 + rand()%1000);
		inputarr.push_back(takeinput);
	}
	cout<<"The elements are : "<<endl;
	for(int i = 0; i < inputSize; i++)
	{
		cout<<inputarr.at(i)<<" ";
	}

	cout<<endl;
	cout<<"The sum of the array elements are : "<<arraySum(inputarr)<<endl;

	return 0;

}
