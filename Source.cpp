#include "Header.h"
#include <string>
#include <vector>
#include <iostream>

using namespace std;

Shoes::Shoes(string nameShoes, double weightShoes, int sizeShoes, string genderShoes) {
	this->name = nameShoes;
	this->weight = weightShoes;
	this->size = sizeShoes;
	this->gender = genderShoes;
}

void Shoes::print() {
	cout << name << "\t Âåñ "
		<< weight << "\t Ðàçìåð "
		<< size << " \t Ìîäåëü"
		<< gender << endl;
}

//ñîðòèðîâêà ïî ðàçìåðó

void sortBubbleSize(vector<Shoes>& shoes) {
	

	for (int i = 0; i < shoes.size(); i++) {
		for (int j = i; j < shoes.size(); j++) {
			if (shoes[i].size < shoes[j].size) {
				Shoes temp = shoes[i];
				shoes[i] = shoes[j];
				shoes[j] = temp;
			}
		}
	}

}

//сортировка по весу возрастание
void sortBubbleWeight(vector<Shoes>& shoes) {

	for (int i = 0; i < shoes.size(); i++) {
		for (int j = i; j < shoes.size(); j++) {
			if (shoes[i].weight > shoes[j].weight) {
				Shoes temp = shoes[i];
				shoes[i] = shoes[j];
				shoes[j] = temp;
			}
		}
	}
}
