/*
 * main.cpp
 *
 *  Created on: Sep 30, 2018
 *      Author: raswantkoushikpeesapati
 */

//Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges,
//awarding points on a scale from 1 to 100 for three categories:
//problem clarity, originality, and difficulty.
//
//
//We define the rating for Alice's challenge to be the triplet a = (a[0],a[1],a[2]), and the rating
//for Bob's challenge to be the triplet b = (b[0],b[1],b[2]).
//
//Your task is to find their comparison points by comparing a[0] with b[0] , a[1] with b[1],and a[2] with b[2].
//
//If a[i] > b[i], then Alice is awarded 1 point.
//If a[i] < b[i], then Bob is awarded 1 point.
//If a[i] == b[i], then neither person receives a point.

//function format
//Complete the function compareTriplets in the editor below.
//It must return an array of two integers, the first being Alice's score and the second being Bob's.
//
//compareTriplets has the following parameter(s):
//
//a: an array of integers representing Alice's challenge rating
//b: an array of integers representing Bob's challenge rating

//Output Format
//
//Return an array of two integers denoting the respective comparison points earned by Alice and Bob.

#include <iostream>
#include <vector>

using namespace std;

vector<int>compareTriplets(vector<int>a, vector<int>b)
{
	int aCount = 0;
	int bCount = 0;
	vector<int>newarr;

	for(int i = 0; i < a.size(); i++)
	{
		if(a.at(i) > b.at(i))
		{
			aCount++;
		}
		else if(a.at(i) < b.at(i))
		{
			bCount++;
		}
	}

	newarr.push_back(aCount);
	newarr.push_back(bCount);

	return newarr;
}

int main()

{
	int inputSize = 0;
	int ainput = 0;
	int binput = 0;
	vector<int>result;
	vector<int>a;
	vector<int>b;

	cout<<"Enter the array size : "<<endl;
	cin>>inputSize;

	cout<<"Enter elements for array 'a' : "<<endl;
	for(int i = 0; i < inputSize; i++)
	{

		cin>>ainput;
		a.push_back(ainput);
	}

	cout<<"Enter elements for array 'b' : "<<endl;
	for(int i = 0; i < inputSize; i++)
	{
		cin>>binput;
		b.push_back(binput);
	}

	result = compareTriplets(a,b);

	for(int i = 0; i < result.size(); i++)
	{
		cout<<result[i]<<" ";
	}

	return 0;
}











