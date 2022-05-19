/*
大学师生类 P113
见Visual Studio QN52
这个可以体验一下使用Visual Studio写多文件的cpp的爽的地方！
202110061554 在Visual Studio下面编译不过 C2664 故拷贝回来编译，用gcc有警告，但还是能编译出来。先这样吧。 
*/
#include <iostream>
#include <string.h>

using namespace std;

// school.h
/*
#pragma once
#define _CRT_SECURE_NO_WARNINGS
*/
class DataRec {
private:
	char* name;
	char* streetAddress;
	char* city;
	char* state;
	char* zip;
public:
	DataRec();
	DataRec(char* n, char* st, char* cty, char* sta, char* zp);
	~DataRec();
	virtual void Print();
protected:
	char* StrSave(char* s);
};

class Student : virtual public DataRec {
private:
	char* major;
	int idNumber;
	int level;
public:
	Student(char* n, char* st, char* cty, char* sta, char* zp, char* m, int id, int lv)
		: DataRec(n, st, cty, sta, zp), idNumber(id), major(StrSave(m)), level(lv) {}
	Student(char* m, int id, int lv) : idNumber(id), major(StrSave(m)), level(lv) {}
	~Student() {
		delete major;
	}
	void Print();
protected:
	void Disp();
};


class Staff : virtual public DataRec {
private:
	char* dept;
	float hourlyWage;
public:
	Staff(char* n, char* st, char* cty, char* sta, char* zp, char* dp, float hrwg)
		: DataRec(n, st, cty, sta, zp), dept(StrSave(dp)), hourlyWage(hrwg) {}
	Staff(char* dp, float hrwg) : dept(StrSave(dp)), hourlyWage(hrwg) {}
	~Staff() { delete dept; }
	void Print();
protected:
	void Disp();
};

class Professor : public Staff {
private:
	float salary;
public:
	Professor(char* n, char* st, char* cty, char* sta, char* zp, char* dp, float sal) : DataRec(n, st, cty, sta, zp), Staff(dp, 0), salary(sal) {}
	void Print();
};

class StudentStaff : public Student, public Staff {
public:
	StudentStaff(char* n, char* st, char* cty, char* sta, char* zp, char* m, int id, int lv, char* dp, float hrwg) 
		: DataRec(n, st, cty, sta, zp), Student(m, id, lv), Staff(dp, hrwg) {}
	void Print();
};

// school.cpp
DataRec::DataRec() {
	name = NULL;
	streetAddress = NULL;
	city = NULL;
	state = NULL;
	zip = NULL;
}

DataRec::DataRec(char* n, char* st, char* cty, char* sta, char* zp)
{
	name = StrSave(n);
	streetAddress = StrSave(st);
	city = StrSave(cty);
	state = StrSave(sta);
	zip = StrSave(zp);
}

DataRec::~DataRec()
{
	delete name;
	delete streetAddress;
	delete city;
	delete state;
	delete zip;
}

void DataRec::Print()
{
	cout << endl << endl
		<< name << endl
		<< streetAddress << endl
		<< city << ","
		<< state << " "
		<< zip << endl;
}

char* DataRec::StrSave(char* s)
{
	char* p;
	p = new char[strlen(s) + 1];
	strcpy(p, s);
	//return nullptr;
	return p;
}

void Student::Print()
{
	DataRec::Print();
	Disp();
}

void Student::Disp()
{
	cout << "major:" << major << endl;
	cout << "Id number:" << idNumber << endl;
	cout << "level:" << level << endl;
}

void Staff::Print()
{
	DataRec::Print();
	Disp();
}

void Staff::Disp()
{
	cout << "Department:" << dept << endl;
	cout << "hourly wage:" << hourlyWage << endl;
}

void Professor::Print()
{
	Staff::Print();
	cout << "Salary:" << salary << endl;
}

void StudentStaff::Print()
{
	DataRec::Print();
	Student::Disp();
	Staff::Disp();
}

// shoolapp.cpp
int main()
{
    //std::cout << "Hello World!\n";

    Student myStudent(
    "Wangchen"
    , "1234 Park lane"
    , "colorado springs"
    , "co."
    , "80907"
    , "computer science"
    , 1234
    , 4);
    myStudent.Print();

    Staff myStaff(
    "Chenwang"
    , "1234Silver lane"
    , "mauitou springs"
    , "co."
    , "12345"
    , "Electrical Engineer"
    , 7.20);
    myStaff.Print();

    Professor myProfessor(
    "Chenchen"
    , "1234567ABC land"
    , "colorado springs"
    , "co."
    , "80907"
    , "computer science"
    , 80.40000);
    myProfessor.Print();

    StudentStaff myPoor(
    "Wangwang"
    ,"76541234 DEFlane"
    , "colorado springs"
    , "co."
    , "80907"
    , "computer science"
    , 1111
    , 3
    , "Electrical Engineering"
    , 5.80);
    myPoor.Print();

    return 0;
}
