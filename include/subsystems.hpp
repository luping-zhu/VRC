#pragma once

#include "api.h"

inline pros::MotorGroup intake({-11, 12}); 
inline ez::Piston piston('A', false);

inline int INTAKE_SPEED = 90;

// Your non-drivetrain motors, sensors, etc. should go here. Below are examples:
// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');