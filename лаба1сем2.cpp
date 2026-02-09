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

	ifstream file("fileShoes.txt");
	if (!(file.is_open())) {
		cout << "error" << endl;
	}
	string nameShoes, genderShoes;
	int sizeShoes, weightShoes;
	
	while (file >> nameShoes >> weightShoes >> sizeShoes >> genderShoes) {//считывается поток ЭфайлЭ
		shoes.push_back(Shoes(nameShoes, weightShoes, sizeShoes, genderShoes));
	}

	file.close();
	cout << "исходные данные" << endl;

	for (int i = 0; i < shoes.size(); i++) {
		shoes[i].print();
	}
	cout << "\n" << endl;
	
	cout << "сортировка по размеру (убывание)" << endl;

	sortBubbleSize(shoes);
	for (int i = 0; i < shoes.size(); i++) {
		shoes[i].print();
	}
	cout << "\n" << endl;

	cout << "сортировка по весу (возрастание)" << endl;

	sortBubbleWeight(shoes);
	for (int i = 0; i < shoes.size(); i++) {
		shoes[i].print();
	}
   return 0;
}



