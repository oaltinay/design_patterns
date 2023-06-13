#pragma once

#include "Strategy.hpp"
#include <memory>
#include <iostream>
#include <functional>

class Composition {
public:
    Composition(std::function<void()> strategy) : m_strategy(strategy) {}
    
    void repair()
    {
        m_strategy();
    }

    void set_composition_strategy(std::function<void()> strategy)
    {
        m_strategy = strategy;
    }
protected:
    std::function<void()> m_strategy;
};
