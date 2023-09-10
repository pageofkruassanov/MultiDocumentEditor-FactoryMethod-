#pragma once
#include "DocumentFactory.h"
#include "GraphicDocument.h"
class GraphicDocumentFactory : public DocumentFactory
{
public:
	GraphicDocument* createDocument() override;
};

