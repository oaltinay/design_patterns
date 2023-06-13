#pragma once

#include <iostream>

class FlyBehavior {
public:
    virtual void fly() = 0;
};

class FlyWithWings : public FlyBehavior
{
public:
    void fly() override
    {
        std::cout << "I am flying with the wings!\n"; 
    }
};

class FlyNoWay : public FlyBehavior
{
public:
    void fly() override
    {
        std::cout << "I cannot fly!\n"; 
    }
};

class FlyRocketPowered : public FlyBehavior
{
public:
    void fly() override
    {
        std::cout << "I am flying with a rocket!\n"; 
    }
};

class QuackBehavior {
public:
    virtual void quack() = 0;
};

class Squeak : public QuackBehavior
{
public:
    void quack() override
    {
        std::cout << "Sqeuak!\n"; 
    }
};

class MuteQuack : public QuackBehavior
{
public:
    void quack() override
    {
        std::cout << "Silence!\n"; 
    }
};