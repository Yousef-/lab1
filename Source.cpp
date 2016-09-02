#include <iostream>
#include <iomanip>
#include <string>
#include "Source.h"

using namespace std;

void main() {

	//the variables
	string line;
	string temp;
	int comma[25];
	int element[25];

	while (getline(cin, line))
	{
		cout << endl;
		///*
		comma[0] = 0;
		comma[1] = line.find(',');
		cout.width(30); 
		cout << line.substr(0, line.find(',')) << left;
		for (int i = 1; i < 24; i++)
		{
			if (i > 1)
			{
				cout.width(20);

				//element[i] = stoi(line.substr(comma[i - 1] + 1, (comma[i] - comma[i - 1] - 1)));
				//cout << element[i] << endl;

				cout << line.substr(comma[i - 1] + 1, (comma[i] - comma[i - 1] - 1))  << left;
			}
			comma[i + 1] = line.find(',', comma[i] + 1);

		}
		fill_n(comma, 25, 0);
	}
	

}