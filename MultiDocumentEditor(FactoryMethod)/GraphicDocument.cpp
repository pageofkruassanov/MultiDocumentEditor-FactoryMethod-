#include "GraphicDocument.h"

void GraphicDocument::create()
{
	std::cout << "Создание графического документа..." << std::endl;
}

void GraphicDocument::open()
{
	std::cout << "Открытие графического документа..." << std::endl;
}

void GraphicDocument::save()
{
	std::cout << "Сохранение графического документа..." << std::endl;
}

void GraphicDocument::saveAs(std::string& fileName)
{
	this->fileName = fileName;
	std::cout << "Сохранение графического документа " << this->fileName << "..." << std::endl;
}

void GraphicDocument::print()
{
	std::cout << "Печать графического документа..." << std::endl;
}

void GraphicDocument::close()
{
	std::cout << "Закрытие графического документа..." << std::endl;
}

void GraphicDocument::drawShape()
{
	std::cout << "Рисование графического документа..." << std::endl;
}
