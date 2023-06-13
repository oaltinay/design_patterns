#pragma once

#include "SimplePizzaFactory.hpp" 

class PizzaStore
{
public:
    std::unique_ptr<Pizza> order_pizza(const std::string& pizza_type)
    {
        std::cout << "PizzaStore order_pizza " << pizza_type << "\n"; 
        
        auto pizza = create_pizza(pizza_type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }
};