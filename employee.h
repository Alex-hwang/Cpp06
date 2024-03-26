#pragma once
#include<iostream>
#include<string>
#include<ctime>
#include<algorithm>
#include<fstream>
using namespace std;

class Employee {
private:
	string e_Name;
	int e_Id;
	int e_Grade;
	float e_Salary;
public:
	Employee();
	~Employee();
	void setEmployee(string name, int id, int grade, float salary);
	int getEmployeeId();
	string getEmployeeName();
	int getEmployeeGrade();
	float getEmployeeSalary();
	void displayEmployee();
};

class Manager :public Employee {
private:
	string m_Department;
public:
	Manager();
	~Manager();
	void setManager(string name, int id, int grade, float salary, string department);
	string getManagerDepartment();
	void displayManager();
};

class Technician :public Employee {
private:
	string t_Skill;
	float t_WorkingHours;
public:
	Technician();
	~Technician();
	void setTechnician(string name, int id, int grade, string skill, float workingHours);
	string getTechnicianSkill();
	void displayTechnician();
};

class Salesman :public Employee {
private:
	float s_Commission;
	int s_Sales;
public:
	Salesman();
	~Salesman();
	void setSalesman(string name, int id, int grade, float commission, int sales);
	float getSalesmanCommission();
	void displaySalesman();
};
