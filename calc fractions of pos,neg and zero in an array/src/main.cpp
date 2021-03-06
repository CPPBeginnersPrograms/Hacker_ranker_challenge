/*
 * main.cpp
 *
 *  Created on: Sep 30, 2018
 *      Author: raswantkoushikpeesapati
 */



//Given an array of integers, calculate the fractions of its elements that are positive, negative, and are zeros. Print the decimal value of each fraction on a new line.
//
//Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to  are acceptable.

#include <iostream>
#include <vector>

using namespace std;


void plusminus(vector<int>arr);

int main()
{
	vector<int>inputarr;
	int inputsize = 0;
	int takeinput;

	cout<<"Enter the input size for the array : "<<endl;
	cin >> inputsize;

	cout<<"Enter elements : "<<endl;

	for(int i = 0; i < inputsize; i++)
	{

		cin>>takeinput;
		inputarr.push_back(takeinput);
	}

	plusminus(inputarr);

	return 0;
}

void plusminus(vector<int>arr)
{
	vector<double>newarr;
	int zero = 0;
	int positive = 0;
	int negative = 0;
	double z, p, n;

	for(int i =0; i < arr.size(); i++)
	{
		if(arr[i] == 0)
			zero++;
		else if(arr[i] <= 0)
			negative++;
		else if(arr[i] >= 0)
			positive++;
	}

	p = positive/(double)arr.size();
	n = negative/(double)arr.size();
	z = zero/(double)arr.size();

	newarr.push_back(p);
	newarr.push_back(n);
	newarr.push_back(z);

	for(int i = 0; i < newarr.size(); i++)
	{
		cout<<newarr.at(i)<<endl;
	}

}
