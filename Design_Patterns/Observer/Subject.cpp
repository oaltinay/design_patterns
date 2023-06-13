/******************************************************************
 * @file  Subject.cpp
 * 
 * @brief Implementation of Subject and WeatherData class.
 ******************************************************************/

#include "Subject.hpp"

#include <iostream>
#include <algorithm>

void Subject::register_observer(std::shared_ptr<Observer> observer)
{
    m_observer_list.push_back(observer);

    std::cout << "Observer " << observer.get() << " registered.\n"; 
}

void Subject::remove_observer(std::shared_ptr<Observer> observer)
{
    auto it = std::find(m_observer_list.begin(), m_observer_list.end(), observer);

    if(std::end(m_observer_list) != it)
    {
        m_observer_list.erase(it);
        std::cout << "Observer " << observer.get() << " removed.\n";
    }
    else
    {
        std::cerr << "Observer " << observer.get() << " not registered, cannot be removed!\n"; 
    }
}

void Subject::notify_observers()
{
    std::cout << "Observers are being notified.\n";

    for(auto o : m_observer_list)
    {
        o->update();
    }
}

Subject::~Subject()
{
    
}

float WeatherData::get_temperature() const
{
    return m_temperature;
}

float WeatherData::get_humidity() const
{
    return m_humidity;
}

void WeatherData::set_temperature(float temperature)
{
    WeatherData::m_temperature = temperature;
}

void WeatherData::set_humidity(float humidity)
{
    m_humidity = humidity;
}

