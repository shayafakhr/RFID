/*
 * RFIDcontainer.h
 * shaya fakhrabadi
 * 301590507
 *
 *  Created on: Oct 12, 2024
 *      Author: xubuntu
 */

#ifndef RFIDSHIPPINGCONTAINER_H_
#define RFIDSHIPPINGCONTAINER_H_

#include "ShippingContainerr.h" //including the shippingcontainer class
#include <map>
#include <string>
#include <vector>

#pragma once // prevent multiple inclusion of header

class RFIDShippingContainer : public ShippingContainerr {
private:
    std::map<std::string, int> items; // Stores items and their quantities

public:
    RFIDShippingContainer(int ID = 0); // Constructor
    void add(const std::string &item); // Adds an item to the container
    std::string getManifest() const override; // Override to return the manifest
};

#endif /* RFIDSHIPPINGCONTAINER_H_ */
