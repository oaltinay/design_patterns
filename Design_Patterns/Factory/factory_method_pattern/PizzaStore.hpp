#pragma once

#include "Pizza.hpp" 

#include <memory>
#include <iostream>

class PizzaStore
{
public:
    ~PizzaStore() {}
    std::unique_ptr<Pizza> order_pizza(const std::string& pizza_type)
    {
        std::cout << "PizzaStore order_pizza " << pizza_type << "\n"; 
        
        auto pizza = this->create_pizza(pizza_type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
   
        return pizza;
    }

    //Factory method to be overrided
    virtual std::unique_ptr<Pizza> create_pizza(const std::string& pizza_type) = 0;
};

class NYStylePizzaStore : public PizzaStore{
public:
    //Factory method to be overrided
    std::unique_ptr<Pizza> create_pizza(const std::string& pizza_type) override
    {
        std::cout << "create_pizza " << pizza_type << "\n"; 
        if(pizza_type == "cheese")
        {
            return std::make_unique<NYStyleCheesePizza>();
        }
        else if(pizza_type == "veggie")
        {
            return std::make_unique<NYStyleVeggiePizza>();
        }
        else if(pizza_type == "pepperoni")
        {
        return std::make_unique<NYStylePepperoniPizza>();
        }
    }
};

class ChicagoStylePizzaStore : public PizzaStore{
public:
    //Factory method to be overrided
    std::unique_ptr<Pizza> create_pizza(const std::string& pizza_type) override
    {
        std::cout << "create_pizza " << pizza_type << "\n"; 
        if(pizza_type == "cheese")
        {
            return std::make_unique<ChicagoStyleCheesePizza>();
        }
        else if(pizza_type == "veggie")
        {
            return std::make_unique<ChicagoStyleVeggiePizza>();
        }
        else if(pizza_type == "pepperoni")
        {
        return std::make_unique<ChicagoStylePepperoniPizza>();
        }
    }
};