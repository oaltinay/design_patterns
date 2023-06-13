/*****************************************************************************
 * @file  CurrentConditionDisplay.hpp
 * 
 * @brief Decleration of CurrentConditionDisplay class.
 *****************************************************************************/

#pragma once

#include "Observer.hpp"
#include "Subject.hpp"

#include <memory>

/**
 * CurrentConditionDisplay class to display temperature and humidity information.
 * Implements Observer interface to get the information from the strategy class.
*/
class CurrentConditionDisplay : public Observer
{
public:
    /**
    * @brief Constructor.
    * @param weather_data_ptr : Pointer to WeatherData (Strategy Object) to get the information.
    * @return None
    */
    CurrentConditionDisplay(std::shared_ptr<WeatherData> weather_data_ptr);

    /**
    * @brief Updates the necessary weather information.
    * @param None
    * @return None
    */
    void update() override;

private:

    /**
    * @brief Displays the weather information.
    * @param None
    * @return None
    */
    void display();

    float m_temperature;
    float m_humidity;
    std::shared_ptr<WeatherData> m_weather_data_ptr;
};