#pragma once

struct StudentNode
{
	char surName[20]; // �������
	char name[20]; // ���
	char middleName[20]; // ��������
	char faculty[60]; // ��������� (�������� ���������)
	char department[60]; // �������� �������
	char group[20]; // ���� ������ �������
	char recordCardNumber[20]; // ����� �������� ������
	// int recordCardNumber; // ��� ��������� ��������� ������� ��������� 
							 // � ������� ������������ ������������� �������� �������� ������
	char birthDateString[20]; // ���� �������� 
	// int birthDay;
	// int birthMonth;
	// int birthYear;
	bool sex; // ���� ���� true - �������
	// false - �������
// �������������� �������� ���
	int startYear; // ��� ������ ��������
	ExamsRecords examsRecordsData[sesCount][namesCount]; // ������ � ������� 5,5 ��� ��� ���� 
	// ��� ���� 11 ���������, 
	// ��� ���� 8 ��������� - 4 ����
	StudentNode* next; // ��������� �� ��������� ������� ��� ������������� ������
	// ������� ��� ����� ������, ����� �������� ������ ������ � ����
	// ����� �������� �����
	// int id; // id ��������������� ���������� (������ ��� ��������� �������) 
	float avrMark; // ������� ���� �� ������� (������ ��� ��������� �������)

};