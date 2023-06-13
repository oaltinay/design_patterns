/*****************************************************************************
 * @file  CurrentConditionDisplay.hpp
 * 
 * @brief Implementation of CurrentConditionDisplay class.
 *****************************************************************************/

#include "CurrentConditionDisplay.hpp"

#include <iostream>

CurrentConditionDisplay::CurrentConditionDisplay(std::shared_ptr<WeatherData> weather_data_ptr) 
: m_weather_data_ptr(weather_data_ptr) 
{
}

void  CurrentConditionDisplay::update()
{
    m_humidity = m_weather_data_ptr->get_humidity();
    m_temperature = m_weather_data_ptr->get_temperature();
    
    display();
}

void  CurrentConditionDisplay::display()
{
    std::cout << "Temperature: " << m_temperature << '\n' << "Humidity: " << m_humidity << '\n';
}
