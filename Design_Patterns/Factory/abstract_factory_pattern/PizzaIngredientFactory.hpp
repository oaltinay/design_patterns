#pragma once

#include "PizzaIngredients.hpp"

#include <iostream>
#include <memory>

class PizzaIngredientFactory
{
public:
    virtual std::unique_ptr<Dough> create_dough() = 0;
    virtual std::unique_ptr<Sauce> create_sauce() = 0;
    virtual std::unique_ptr<Cheese> create_cheese() = 0;
    virtual std::unique_ptr<Clams> create_clams() = 0;
};

class NYStylePizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    std::unique_ptr<Dough> create_dough() override
    {
        return std::make_unique<ThinCrustDough>();
    }

    std::unique_ptr<Sauce> create_sauce() override
    {
        return std::make_unique<MarinaraSauce>();
    }
    
    std::unique_ptr<Cheese> create_cheese() override
    {
        return std::make_unique<ReggianoCheese>();
    }
    
    std::unique_ptr<Clams> create_clams() override
    {
        return std::make_unique<FreshClams>();
    }
};

class ChicagoStylePizzaIngredientFactory : public PizzaIngredientFactory
{
public:
    std::unique_ptr<Dough> create_dough() override
    {
        return std::make_unique<ThickDough>();
    }

    std::unique_ptr<Sauce> create_sauce() override
    {
        return std::make_unique<PlumTomatoSauce>();
    }
    
    std::unique_ptr<Cheese> create_cheese() override
    {
        return std::make_unique<MozarellaCheese>();
    }
    
    std::unique_ptr<Clams> create_clams() override
    {
        return std::make_unique<FrozenClams>();
    }
};