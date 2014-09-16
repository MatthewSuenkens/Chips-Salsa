#include <iostream>
#include <vector>
#include <string>

int main(){
	const int SALSA_NUM = 5;
	vector<string> salsaNames(SALSA_NUM);
	vector<int> salsaSold(SALSA_NUM);

	salsaNames.at(0) = "mild";
	salsaNames.at(1) = "medium";
	salsaNames.at(2) = "sweet";
	salsaNames.at(3) = "hot";
	salsaNames.at(4) = "zesty";

	cout << "Enter the number of jars sold for mild. " << endl;
	cin >> salsaSold.at(0);
	cout << "Enter the number of jars sold for medium. " << endl;
	cin >> salsaSold.at(1);
	cout << "Enter the number of jars sold for sweet. " << endl;
	cin >> salsaSold.at(2);
	cout << "Enter the number of jars sold for hot. " << endl;
	cin >> salsaSold.at(3);
	cout << "Enter the number of jars sold for zesty. " << endl;
	cin >> salsaSold.at(4);

	//produce a report
	cout << "Salsa flavor       number sold";
	
	for (int i = 0; i < SALSA_NUM; i++){
		cout << salsaNames.at(i) << ":   " << salsaSold.at(i);
	}
}