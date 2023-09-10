#pragma once
#include <iostream>
#include "IDocument.h"
class GraphicDocument : public IDocument
{
	std::string fileName;
public:
	void create() override;
	void open() override;
	void save() override;
	void saveAs(std::string& fileName) override;
	void print() override;
	void close() override;
	void drawShape();
};

