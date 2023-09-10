#include <iostream>
#include "TxtEditor.h"
#include "DocumentFactory.h"
#include "GraphicDocument.h"
#include "GraphicDocumentFactory.h"
#include "IDocument.h"
#include "IEditor.h"
#include "TxtDocument.h"
#include "TxtDocumentFactory.h"

int main()
{
    DocumentFactory* docFactory[2];
    docFactory[0] = new TxtDocumentFactory();
    docFactory[1] = new GraphicDocumentFactory();
    
    TxtEditor txtEditor;
    txtEditor.createDocument()
}