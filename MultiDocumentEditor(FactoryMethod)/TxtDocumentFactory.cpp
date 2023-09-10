#include "TxtDocumentFactory.h"

IDocument* TxtDocumentFactory::createDocument()
{
    return new TxtDocument();
}
