#pragma once

#include <iostream>

class SimpleCompositor {
public:
    void compose()
    {
        std::cout << "Simple Compositor.\n";
    }
};

class TextCompositor {
public:
    void compose()
    {
        std::cout << "Text Compositor.\n";
    }
};

class ArrayCompositor {
public:
    void compose()
    {
        std::cout << "Array Compositor.\n";
    }
};
