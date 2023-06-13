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
        std::unique_ptr<Pizza> pizza = nullptr;
        std::unique_ptr<PizzaIngredientFactory> ny_ingredient_factory = std::make_unique<NYStylePizzaIngredientFactory>();


        std::cout << "create_pizza " << pizza_type << "\n"; 

        if(pizza_type == "cheese")
        {
            pizza = std::make_unique<CheesePizza>(std::move(ny_ingredient_factory));
            pizza->set_name("New York Style Cheese Pizza");
        }
        else if(pizza_type == "clam")
        {
            pizza = std::make_unique<ClamsPizza>(std::move(ny_ingredient_factory));
            pizza->set_name("New York Style Clam Pizza");
        }

        return pizza;
    }
};

class ChicagoStylePizzaStore : public PizzaStore{
public:
    //Factory method to be overrided
    std::unique_ptr<Pizza> create_pizza(const std::string& pizza_type) override
    {
        std::unique_ptr<Pizza> pizza = nullptr;
        std::unique_ptr<PizzaIngredientFactory> ch_ingredient_factory = std::make_unique<ChicagoStylePizzaIngredientFactory>();


        std::cout << "create_pizza " << pizza_type << "\n"; 

        if(pizza_type == "cheese")
        {
            pizza = std::make_unique<CheesePizza>(std::move(ch_ingredient_factory));
            pizza->set_name("Chicago Style Cheese Pizza");
        }
        else if(pizza_type == "clam")
        {
            pizza = std::make_unique<ClamsPizza>(std::move(ch_ingredient_factory));
            pizza->set_name("Chicago Style Clam Pizza");
        }

        return pizza;
    }
};