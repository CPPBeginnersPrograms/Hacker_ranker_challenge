/*
 * main.cpp
 *
 *  Created on: Sep 29, 2018
 *      Author: raswantkoushikpeesapati
 */

#include <iostream>
#include <vector>


using namespace std;

//Find the difference between two diagonals in a matrix and return a non negative value.

// Complete the diagonalDifference function below.
//brute force method only for 3*3 matrix


//int diagonalDifference(vector<vector<int>> arr) {
//    int num = 0;
//    int num1 = 0;
//    int subval = 0;
//    for(int row = 0; row < 1; row++)
//        for(int col = 0; col < 1; col++)
//        {
//            num = arr[row][col] + arr[row+1][col+1] + arr[row + 2][col +2];
//            num1 = arr[row][col +2] + arr[row +1][col + 1] + arr[row +2][col];
//        }
//    subval = abs(num - num1);
//
//    return subval;
//
//}

//efficient method
int diagonalDifference(vector <vector<int> > arr) {
    int num = 0;
    int num1 = 0;
    int subval = 0;
    for(int row = 0; row < 1; row++)
        for(int col = 0; col < 1; col++)
        {
        	//for first diagnol row
        	if(row == col)
        	{
        		num += arr[row][col];
        	}
        	if(row == arr.size() - col - 1)
        	{
        		num1 += arr[row][col];
        	}
        }
    subval = abs(num - num1);	//abs function is to get a result of non negative number.

    return subval;

}


int main()
{


    int n;
    cout<<"Enter the vector size :"<<endl;
    cin >> n;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

//  vector < vector<int> > arr(3 ,vector<int>(n)); //you can also create a matrix like this
    vector < vector<int> > arr(n);

    cout<<"enter numbers"<<endl;
    for (int i = 0; i < n; i++) {
    	arr[i].resize(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    cout << "The nonnegative result is : "<< result << "\n";

    return 0;
}



