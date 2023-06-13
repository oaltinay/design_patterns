/******************************************************************
 * @file  Subject.hpp
 * 
 * @brief Decleration of Subject and WeatherData class.
 ******************************************************************/

#pragma once

#include "Observer.hpp"

#include <vector>
#include <memory>

/**
 * Subject class to store, register, remove and notify the its observers.
*/
class Subject {
public:
    /**
    * @brief Register observer.
    * @param observer : Pointer to observer to be registered.
    * @return None
    */
    virtual void register_observer(std::shared_ptr<Observer> observer);
    
    /**
    * @brief Remove observer.
    * @param observer : Pointer to observer to be removed.
    * @return None
    */
    virtual void remove_observer(std::shared_ptr<Observer> observer);
    
    /**
    * @brief Notify observer.
    * @param None
    * @return None
    */
    virtual void notify_observers(); 

    /**
    * @brief Destructor.
    * @param None
    * @return None
    */
    virtual ~Subject(); 

protected:
    std::vector<std::shared_ptr<Observer>> m_observer_list;
};

/**
 * WeatherData class to store temperature and humidity information.
*/
class WeatherData : public Subject {
public:
    /**
    * @brief Gets the temperature.
    * @param None.
    * @return Temperature value
    */
    float get_temperature() const;
    
    /**
    * @brief Gets the humidity.
    * @param None.
    * @return Humidity value
    */
    float get_humidity() const;

    /**
    * @brief Sets the temperature.
    * @param temperature to be set.
    * @return None
    */
    void set_temperature(float temperature);

    /**
    * @brief Sets the humidity.
    * @param humidity to be set.
    * @return None
    */
    void set_humidity(float humidity);

private:
    float m_temperature;
    float m_humidity;
};