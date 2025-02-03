/*
 *
 *  shaya fakhrabadi
 *  301590507
 *  Created on:
 *      Author: xubuntu
 */

#include "RFIDShippingContainer.h"

#include <iostream>  
#include <string>
#include <string_view>
#include <algorithm>
#include <map>
#include <sstream>

RFIDShippingContainer::RFIDShippingContainer(int ID) : ShippingContainerr(ID) {}

void RFIDShippingContainer::add(const std::string &item) {
    items[item]++; // Increment the quantity of the item
    //making use of map
}

std::string RFIDShippingContainer::getManifest() const {
    std::ostringstream oss;
    for (const auto &pair : items) { // loop for manifest list
        oss << pair.second << " " << pair.first << ". "; // Format: quantity item.
    }
    return oss.str(); // Returns the built manifest string
}



