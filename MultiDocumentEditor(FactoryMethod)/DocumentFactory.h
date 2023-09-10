#pragma once
#include "IDocument.h"
class DocumentFactory abstract
{
public:
	virtual IDocument* createDocument() = 0;
};

