#pragma once
#include <iostream>
#include <string>

using namespace std;
//========================Task 1===================================
/*������� ����������� ������� ����� Employer (���-
�����) � ����� ����������� �������� Print() ���-
����� ��� ����������� ������: President, Manager,
Worker �������������� ������� Print() ��� ������
����������, ��������������� ������� ���� ���-
������ */
enum Sex { Famale, Male };

class Employer {
	string m_lpName;
	string m_lpSurname;
	string m_lpPosition;
	int m_sex;
	int m_adge;
public:
	Employer(string name, string surname, string position, int sex, int adge) : m_lpName(name), m_lpSurname(surname), m_lpPosition(position), m_sex(sex), m_adge(adge) {}
	string getName() { return m_lpName; }
	string getSurname() { return m_lpSurname; }
	string getPosition() { return m_lpPosition; }
	string getSex() {
		return m_sex ? "Male" : "Famale";
	}
	int getAgde() { return m_adge; }

	virtual void print() = 0;
};

class President : public Employer {
private:
	int m_office_number;
	int m_stoks_persent;
public:
	President(string name, string surname, int sex, int adge, int ofNumber, int stoks) : Employer(name, surname, "President", sex, adge), m_office_number(ofNumber), m_stoks_persent(stoks) {}
	void print() {
		cout << "==========President============" << endl;
		cout << "Name: " << this->getName() << endl;
		cout << "Surname: " << this->getSurname() << endl;
		cout << "Positions: " << this->getPosition() << endl;
		cout << "Sex: " << this->getSex() << endl;
		cout << "Adge: " << this->getAgde() << endl;
		cout << "Office num.: " << m_office_number << endl;
		cout << "Stoks persent: " << m_stoks_persent << " %" << endl;
		cout << "===============================" << endl;
	}
};

class Manager : public Employer {
private:
	int m_office_number;
	string m_Branch;
public:
	Manager(string name, string surname, int sex, int adge, int ofNumber, string branch) : Employer(name, surname, "Manager", sex, adge), m_office_number(ofNumber), m_Branch(branch) {}
	void print() {
		cout << "===========Manager=============" << endl;
		cout << "Name: " << this->getName() << endl;
		cout << "Surname: " << this->getSurname() << endl;
		cout << "Positions: " << this->getPosition() << endl;
		cout << "Sex: " << this->getSex() << endl;
		cout << "Adge: " << this->getAgde() << endl;
		cout << "Office num.: " << m_office_number << endl;
		cout << "Branch name: " << m_Branch << endl;
		cout << "===============================" << endl;
	}
};

class Worker : public Employer {
private:
	string m_lpSubdivision;
	int m_personal_number;
public:
	Worker(string name, string surname, string position, int sex, int adge, string subdivision, int pNumber) : Employer(name, surname, position, sex, adge), m_lpSubdivision(subdivision), m_personal_number(pNumber) {}
	void print() {
		cout << "=======Worker of " << this->getPosition() << "=======" << endl;
		cout << "Name: " << this->getName() << endl;
		cout << "Surname: " << this->getSurname() << endl;
		cout << "Positions: " << this->getPosition() << endl;
		cout << "Sex: " << this->getSex() << endl;
		cout << "Adge: " << this->getAgde() << endl;
		cout << "Subdivision name: " << m_lpSubdivision << endl;
		cout << "Personal number: " << m_personal_number << endl;
		cout << "===============================" << endl;
	}
};
