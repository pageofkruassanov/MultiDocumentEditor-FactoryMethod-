#include "GraphicDocument.h"

void GraphicDocument::create()
{
	std::cout << "�������� ������������ ���������..." << std::endl;
}

void GraphicDocument::open()
{
	std::cout << "�������� ������������ ���������..." << std::endl;
}

void GraphicDocument::save()
{
	std::cout << "���������� ������������ ���������..." << std::endl;
}

void GraphicDocument::saveAs(std::string& fileName)
{
	this->fileName = fileName;
	std::cout << "���������� ������������ ��������� " << this->fileName << "..." << std::endl;
}

void GraphicDocument::print()
{
	std::cout << "������ ������������ ���������..." << std::endl;
}

void GraphicDocument::close()
{
	std::cout << "�������� ������������ ���������..." << std::endl;
}

void GraphicDocument::drawShape()
{
	std::cout << "��������� ������������ ���������..." << std::endl;
}
