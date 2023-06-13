#include "Context.hpp"

int main()
{
    Composition<SimpleCompositor> simple_composition;
    Composition<TextCompositor> text_composition;
    Composition<ArrayCompositor> array_composition;
    
    simple_composition.repair();
    text_composition.repair();
    array_composition.repair();
}