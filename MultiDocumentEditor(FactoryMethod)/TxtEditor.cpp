#include "TxtEditor.h"

void TxtEditor::createDocument()
{
	if (document != nullptr)
		delete document;
	document = TxtDocumentFactory().createDocument();
}

void TxtEditor::openDocument()
{
	document->open();
}

void TxtEditor::saveDocument()
{
	document->save();
}

void TxtEditor::saveAsDocument(std::string& fileName)
{
	document->saveAs(fileName);
}

void TxtEditor::printDocument()
{
	document->print();
}

void TxtEditor::closeDocument()
{
	document->close();
	delete document;
}

void TxtEditor::editTxtDocument(std::string newTxt)
{
	TxtDocument* tempTxtDocument = dynamic_cast<TxtDocument*>(document);
	tempTxtDocument->editTxt(newTxt);
}
