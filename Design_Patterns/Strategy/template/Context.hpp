#pragma once

#include "Strategy.hpp"
#include <memory>
#include <iostream>

template <typename T>
class Composition {
public:
    void repair()
    {
        m_compositor.compose();
    }

protected:
    T m_compositor;
};
