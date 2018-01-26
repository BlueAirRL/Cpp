// SumTwo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <map>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
    //Key is the number and value is its index in the vector.
	map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < numbers.size(); i++) {
		int numberToFind = target - numbers[i];

            //if numberToFind is found in map, return them
		if (hash.find(numberToFind) != hash.end()) {
                    //+1 because indices are NOT zero based
			result.push_back(hash[numberToFind] + 1);
			result.push_back(i + 1);			
			return result;
		}

            //number was not found. Put it in the map.
		hash[numbers[i]] = i;
	}
	return result;
}

int main(int argc, char* argv[])
{
	int iarray[] = {1,4,6,8};
	vector<int> vect(iarray, iarray+4);
	vector<int> retvect;
	retvect = twoSum(vect, 10);

	printf("retvect[%d]\tretvect[%d]\n", retvect[0], retvect[1]);
	printf("Hello World!\n");
	return 0;
}

