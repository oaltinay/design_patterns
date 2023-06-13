#include "Context.hpp"

int main()
{
    Composition simple_composition(SimpleCompositor);
    Composition text_composition(TextCompositor);
    Composition array_composition(ArrayCompositor);
    
    simple_composition.repair();
    text_composition.repair();
    array_composition.repair();

    std::cout << "Change Behvaior of simple composition...\n";

    simple_composition.set_composition_strategy(TextCompositor);

    simple_composition.repair();
}