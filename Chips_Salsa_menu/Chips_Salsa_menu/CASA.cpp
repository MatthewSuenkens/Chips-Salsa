#include <iostream>
#include <vector>
#include <string>
#include <vector>

using namespace std; 

int main(){
	int highSales = 0;
	int lowSales = 100;
	const int SALSA_NUM = 5;
	vector<string> salsaNames(SALSA_NUM);
	vector<int> salsaSold(SALSA_NUM);
	int highName = 0;
	int lowName = 0;

	salsaNames.at(0) = "mild";
	salsaNames.at(1) = "medium";
	salsaNames.at(2) = "sweet";
	salsaNames.at(3) = "hot";
	salsaNames.at(4) = "zesty";

	for (int i = 0; i < SALSA_NUM; ++i) {
		cout << "Enter the number of jars sold for " << salsaNames.at(i) << "." << endl;
		cin >> salsaSold.at(i);
	}


	//produce a report
	cout << "Salsa flavor \t Number sold" << endl;

	for (int i = 0; i < SALSA_NUM; i++){
		cout << salsaNames.at(i) << ":\t\t " << salsaSold.at(i) << endl;
	}
	for (int j = 0; j < SALSA_NUM; j++) {
		if(salsaSold.at(j) > highSales) {
			highSales = salsaSold.at(j);
			highName = j;
		}
		if (salsaSold.at(j) < lowSales) {
			lowSales = salsaSold.at(j);
			lowName = j;
		}
	}
	cout << "The salsa with the lowest sales was " << salsaNames.at(lowName) << " with " << lowSales << endl;
	cout << "The salsa with the highest sales was " << salsaNames.at(highName) << " with " << highSales << endl;
	
}