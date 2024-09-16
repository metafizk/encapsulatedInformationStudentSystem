#include <iostream>
#include <string>

using namespace std;

class informationSys {
private:
	string name;
	string surname;
	string number;

public:
	informationSys(string cname, string csurname, string cnumber) :name(cname), surname(csurname), number(cnumber) {}

	string getName() {
		return name;
	}
	void setName(const string newName) {
		name = newName;

	}

	string getSurname() {
		return surname;
	}
	void setSurname(const string newSurname) {
		surname = newSurname;

	}

	string getNumber() {
		return number;
	}
	void setNumber(const string newNumber) {
		number = newNumber;

	}

	void printInformation() {
		cout << "name: " << name << endl;
		cout << "surname : " << surname << endl;
		cout << "number: " << number << endl;

	}
};


int main() {
	informationSys informationSys1("ahmet", " cigiloglu", "21120383");

	informationSys1.printInformation();


	informationSys1.setName("mehmet");
	informationSys1.setSurname("kara");
	informationSys1.setNumber("12121212");

	informationSys1.printInformation();

	return 0;
}