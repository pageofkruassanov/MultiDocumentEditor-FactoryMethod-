#include "GraphicDocumentFactory.h"

IDocument* GraphicDocumentFactory::createDocument()
{
    return new GraphicDocument();
}
