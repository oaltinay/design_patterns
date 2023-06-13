/*********************************************************************
 * @file  Observer.hpp
 * 
 * @brief Header of the interface Observer.
 *********************************************************************/

#pragma once

/**
 * Observer interface in Observer pattern.
 * Provides an interface to update Observers' state.
*/
class Observer {
public:
    /**
    * @brief Updates the Observer.
    * @param None
    * @return None
    */
    virtual void update() = 0;
};