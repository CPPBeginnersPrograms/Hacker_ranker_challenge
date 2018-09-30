/*
 * main.cpp
 *
 *  Created on: Sep 30, 2018
 *      Author: raswantkoushikpeesapati
 */

//You are in charge of the cake for your niece's birthday and have decided the cake will have one candle for
//each year of her total age. When she blows out the candles, she’ll only be able to blow out the tallest ones.
//Your task is to find out how many candles she can successfully blow out.
//
//
//For example, if your niece is turning 4 years old, and the cake will have 4 candles of height 4,4 ,3,1,
//she will be able to blow out 2 candles successfully, since the tallest candles are of height 4 and there are 2 such candles.


//Complete the function birthdayCakeCandles in the editor below. It must return an
//integer representing the number of candles she can blow out.
//birthdayCakeCandles has the following parameter(s):
//ar: an array of integers representing candle heights

#include <iostream>
#include <vector>

using namespace std;

int birthdayCakeCandles(vector<int> ar) {
    //sort(ar.begin(), ar.end());
    int n = ar.size();
    int count = 0;
    vector<int>::iterator tallestNum = max_element(ar.begin(),ar.end());



    for(int i = 0; i < n; i++)
    {
        if(ar[i] == *tallestNum)
            count++;
    }
    return count;
}

int main()
{
	srand(time(0));
	int age = 0;
	vector<int>inputarr;
	int takeinput= 0;
	int result = 0;
	cout<<"Enter your age : "<<endl;
	cin>>age;

	cout<<"Candle representation in Heights : "<<endl;
	for(int i =0; i < age; i++)
	{
		takeinput = (1 + rand() % age);
		inputarr.push_back(takeinput);
	}
	for(int i = 0 ; i < age; i++)
	{
		cout<<inputarr.at(i)<<" ";
	}
	result = birthdayCakeCandles(inputarr);

	cout<<" \nThe number of candles you can blow is : "<<result<<endl;
	return 0;
}
