// TODO: implement these.
#include "GlyphContext.h"

GlyphContext::GlyphContext():
	_index(),
	_fonts()
{}

GlyphContext::~GlyphContext()
{}

void GlyphContext::Next(int step)
{}

void GlyphContext::Insert(int quantity1)
{}

Font* GlyphContext::GetFont()
{
    // TODO
    return 0;
}

void GlyphContext::SetFont(Font*, int span)
{}

//    int _index;
//    BTree* _fonts;
