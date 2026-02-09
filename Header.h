#pragma once
#include <string>
#include <vector>

using namespace std;

class Shoes {
public:
	string name;
	int size;
	double weight;
	string gender;
	

	Shoes(string name, double weight, int size, string gender);
	void print();
};

void sortBubbleSize(vector<Shoes>& shoes);
