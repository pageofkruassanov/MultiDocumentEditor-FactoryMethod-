#pragma once
#include "DocumentFactory.h"
#include "TxtDocument.h"
class TxtDocumentFactory : public DocumentFactory
{
public:
	TxtDocument* createDocument() override;
};

