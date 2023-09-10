#pragma once
#include "IDocument.h"
#include <iostream>
class TxtDocument : public IDocument
{
	std::string txt;
	std::string fileName;
public:
	void create() override;
	void open() override;
	void save() override;
	void saveAs(std::string& fileName) override;
	void print() override;
	void close() override;
	void editTxt(std::string& fileTxt);
};

