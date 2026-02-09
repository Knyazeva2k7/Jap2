#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	vector<Shoes> shoes;

	ifstream fin("fileShoes.txt");
	if (!(fin.is_open())) {
		cout << "error" << endl;
	}
	string nameShoes, genderShoes;
	int sizeShoes, weightShoes;
	
	while (fin >> nameShoes >> weightShoes >> sizeShoes >> genderShoes) {
		shoes.push_back(Shoes(nameShoes, weightShoes, sizeShoes, genderShoes));
	}

	fin.close();

	for (int i = 0; i < shoes.size(); i++) {
		shoes[i].print();
	}

	sortBubbleSize(shoes);
	for (int i = 0; i < shoes.size(); i++) {
		shoes[i].print();
	}
   return 0;
}

