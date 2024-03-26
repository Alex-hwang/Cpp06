#include"employee.h"
#pragma once

Employee::Employee() {
	e_Name = " ";
	e_Id = 0;
	e_Grade = 0;
	e_Salary = 0.0;
}

Employee::~Employee() {
	//cout << "Employee object destroyed" << endl;
}

void Employee::setEmployee(string name, int id, int grade, float salary) {
	e_Name = name;
	e_Id = id;
	e_Grade = grade;
	e_Salary = salary;
}

int Employee::getEmployeeId() {
	return e_Id;
}

string Employee::getEmployeeName() {
	return e_Name;
}

int Employee::getEmployeeGrade() {
	return e_Grade;
}

float Employee::getEmployeeSalary() {
	return e_Salary;
}

void Employee::displayEmployee() {
	cout << "Employee Name: " << e_Name << endl;
	cout << "Employee Id: " << e_Id << endl;
	cout << "Employee Grade: " << e_Grade << endl;
	cout << "Employee Salary: " << e_Salary << endl;
}

Manager::Manager() {
	m_Department = " ";
}

Manager::~Manager() {
	//cout << "Manager object destroyed" << endl;
}

void Manager::setManager(string name, int id, int grade, float salary, string department) {
	setEmployee(name, id, grade, (12000 + salary));
	m_Department = department;
}

string Manager::getManagerDepartment() {
	return m_Department;
}

void Manager::displayManager() {
	displayEmployee();
	cout << "Manager Department: " << m_Department << endl;
}

Technician::Technician() {
	t_Skill = " ";
}

Technician::~Technician() {
	//cout << "Technician object destroyed" << endl;
}

void Technician::setTechnician(string name, int id, int grade, string skill, float workingHours) {
	setEmployee(name, id, grade, workingHours * 260);
	t_Skill = skill;
}

string Technician::getTechnicianSkill() {
	return t_Skill;
}

void Technician::displayTechnician() {
	displayEmployee();
	cout << "Technician Skill: " << t_Skill << endl;
}

Salesman::Salesman() {
	s_Commission = 0.0;
}

Salesman::~Salesman() {
	//cout << "Salesman object destroyed" << endl;
}

void Salesman::setSalesman(string name, int id, int grade, float commission, int sales) {
	setEmployee(name, id, grade, sales * 200 * 0.05);
	s_Commission = commission;
	s_Sales = sales;
}

float Salesman::getSalesmanCommission() {
	return s_Commission;
}

void Salesman::displaySalesman() {
	displayEmployee();
	cout << "Salesman Commission: " << s_Commission << endl;
	cout << "Salesman Sales: " << s_Sales << endl;
}