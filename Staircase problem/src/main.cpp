/*
 * main.cpp
 *
 *  Created on: Sep 30, 2018
 *      Author: raswantkoushikpeesapati
 */
//Observe that its base and height are both equal to , and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.
//
//Write a program that prints a staircase of size .


#include <iostream>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int k, sp, w =1;
    k = n -1;
    for(int i =0 ; i < n ; i++){
        sp = k;
        for(int i = 0; i < sp; i++){cout<<" ";}
        for(int j = 0; j < w; j++){cout<<"#";}
        cout<<endl;
        k--;
        w++;
    }
}

int main()
{
	int n;
	cout<< " Enter the size of stairs you want to print : "<<endl;
	cin>> n;

	staircase(n);
	return 0;
}

