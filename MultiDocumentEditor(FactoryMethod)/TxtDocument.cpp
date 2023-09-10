#include "TxtDocument.h"

void TxtDocument::create()
{
	std::cout << "Создание текстового документа..." << std::endl;
}

void TxtDocument::open()
{
	std::cout << "Создание текстового документа..." << std::endl;
}

void TxtDocument::save()
{
	std::cout << "Сохранение текстового документа..." << std::endl;
}

void TxtDocument::saveAs(std::string& fileName)
{
	this->fileName = fileName;
	std::cout << "Сохранение текстового документа " << this->fileName << "..." << std::endl;
}

void TxtDocument::print()
{
	std::cout << "Печать текстового документа..." << std::endl;
}

void TxtDocument::close()
{
	std::cout << "Закрытие текстового документа..." << std::endl;
}

void TxtDocument::editTxt(std::string& fileTxt)
{
	txt = fileTxt;
}
