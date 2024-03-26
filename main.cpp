#include"employee.h"

int main() {
	srand(time(NULL));
	Manager m[1];
	m[0].setManager("华小清", 000001, 10, 5000, "办公室");
	m[0].displayManager();
	cout << endl;

	Technician t[3];
	string nameSeed = "ABCDEFGHIJKLMNOPQRRSTUVWXYZ";
	string skillSeed = "abcdf";

	for (int i = 0; i < 3; i++) {
		string name = "技术员";
		name += nameSeed[i];
		string skill = "技术";
		skill += skillSeed[i];

		t[i].setTechnician(name, 10000 + i + 1, 7, skill, 8 * (i + 1));
		t[i].displayTechnician();
		cout << endl;
	}

	Salesman s[20];
	for (int i = 0; i < 20; i++) {
		string name = "销售员";
		name += nameSeed[i % 20];
		s[i].setSalesman(name, 20000 + i + 1, 5, rand() % 200 + 600, (20 * (20 * rand() % 11) + 400));
		s[i].displaySalesman();
		cout << endl;
	}
	return 0;
}