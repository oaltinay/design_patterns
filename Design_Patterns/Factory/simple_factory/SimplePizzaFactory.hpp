#pragma once

#include "Pizza.hpp" 
#include <memory>

std::unique_ptr<Pizza> create_pizza(const std::string& pizza_type)
{
    std::cout << "create_pizza " << pizza_type << "\n"; 
    if(pizza_type == "cheese")
    {
        return std::make_unique<CheesePizza>();
    }
    else if(pizza_type == "veggie")
    {
        return std::make_unique<VeggiePizza>();
    }
    else if(pizza_type == "pepperoni")
    {
        return std::make_unique<PepperoniPizza>();
    }
}