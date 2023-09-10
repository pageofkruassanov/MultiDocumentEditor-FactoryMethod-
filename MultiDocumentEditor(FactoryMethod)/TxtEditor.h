#pragma once
#include "IEditor.h"
#include "TxtDocumentFactory.h"
class TxtEditor : public IEditor
{
	TxtDocument* document;
public:
	TxtEditor() : document{TxtDocumentFactory().createDocument()} {};
	void createDocument() override;
	void openDocument() override;
	void saveDocument() override;
	void saveAsDocument(std::string& fileName) override;
	void printDocument() override;
	void closeDocument() override;
	void editTxtDocument(std:: string newTxt);
};

