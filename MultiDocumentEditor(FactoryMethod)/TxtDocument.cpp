#include "TxtDocument.h"

void TxtDocument::create()
{
	std::cout << "�������� ���������� ���������..." << std::endl;
}

void TxtDocument::open()
{
	std::cout << "�������� ���������� ���������..." << std::endl;
}

void TxtDocument::save()
{
	std::cout << "���������� ���������� ���������..." << std::endl;
}

void TxtDocument::saveAs(std::string& fileName)
{
	this->fileName = fileName;
	std::cout << "���������� ���������� ��������� " << this->fileName << "..." << std::endl;
}

void TxtDocument::print()
{
	std::cout << "������ ���������� ���������..." << std::endl;
}

void TxtDocument::close()
{
	std::cout << "�������� ���������� ���������..." << std::endl;
}

void TxtDocument::editTxt(std::string& fileTxt)
{
	txt = fileTxt;
}
