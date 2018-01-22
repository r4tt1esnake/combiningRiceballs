#include <iostream>
#include <fstream>

int ballNum;
int *sizeList;

void getInput();

int main() {

	getInput();

	int** grid;
	grid = new int*[ballNum];

	for(int i = 0; i < ballNum; i++) {
		grid[i] = new int[ballNum];
	}

	/* ------------------------------- */

	for(int i = 0; i < ballNum; i++) {

		for(int j = i; j < ballNum; j++) {

			

		}

	}

	/* ------------------------------- */

	for(int i = 0; i < ballNum; i++) {
		delete [] grid[i];
	}

	delete [] grid;

	return 0;

}

void getInput() {

	std::ifstream file;
	file.open("s4.x.in");

	file >> ballNum;

	sizeList = new int[ballNum];

	for(int i = 0; i < ballNum; i++) {
		file >> sizeList[i];
	}

}