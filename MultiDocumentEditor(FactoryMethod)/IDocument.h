#pragma once
#include <iostream>
class IDocument abstract
{
public:
	virtual void create() = 0;
	virtual void open() = 0;
	virtual void save() = 0;
	virtual void saveAs(std::string& fileName) = 0;
	virtual void print() = 0;
	virtual void close() = 0;
};

