/*
 * main.cpp
 *
 *  Created on: Sep 30, 2018
 *      Author: raswantkoushikpeesapati
 */
//
//Given five positive integers, find the minimum and maximum values that can be calculated by
//summing exactly four of the five integers. Then print the respective
//minimum and maximum values as a single line of two space-separated long integers.


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void minmaxval(vector<int>arr)
{
	sort(arr.begin(), arr.end());
	long int minval = 0;
	long int maxval = 0;


	for(int i = 0 ; i < arr.size() - 1; i++)
	{
		minval += arr.at(i);
	}
	for(int j = 1; j < arr.size(); j++)
	{
		maxval += arr.at(j);
	}

	cout<<"min val : "<<minval<<" \n max val : "<<maxval<<endl;
}

int main()
{
	vector<int>inputarr;
	int inputsize = 0;
	int takeinput;

	cout<<"Enter the array size : "<<endl;
	cin>>inputsize;


	cout<<"Enter the elements : "<<endl;
	for(int i = 0; i < inputsize;i++)
	{
		cin>> takeinput;
		inputarr.push_back(takeinput);
	}

	minmaxval(inputarr);

	return 0;
}
