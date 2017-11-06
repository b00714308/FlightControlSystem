/*
* FlightSystem.h
* Author: Matthew Webster b00714308
* Description: Class declaration header file for the FlightSystem Class
*/

#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Aircraft.h"

class FlightSystem {
private:
	std::vector<Aircraft> aircraft;
	std::vector<Aircraft> aircraftList_;

public:
	void AddAircraft(std::string flightNumber, std::string airline, std::string aircraftType, std::string gridReference, int groundspeed, int altitude, int heading);
	std::vector<Aircraft> ListAllAircraft();
	std::vector<Aircraft> ListAllCruisingAircraft();
	int numAircraftInSector();
	RemoveAircraft(std::string flightNumber);
	ChangeHeading(std::string flightNumber, int heading);
	int GetHeading(std::string flightNumber);
	ChangeAltitude(std::string flightNumber, int altitude);
	int GetAltitude(std::string flightNumber);
};