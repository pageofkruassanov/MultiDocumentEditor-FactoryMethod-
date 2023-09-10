#pragma once
#include <iostream>

class IEditor abstract
{
public:
	virtual void createDocument() = 0;
	virtual void openDocument() = 0;
	virtual void saveDocument() = 0;
	virtual void saveAsDocument(std::string& fileName) = 0;
	virtual void printDocument() = 0;
	virtual void closeDocument() = 0;
};

