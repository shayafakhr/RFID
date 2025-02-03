/*
 * ManualShippingContainer.h
 * shaya fakhrabadi
 * 301590507
 *  Created on: Oct 12, 2024
 *      Author: xubuntu
 */

#ifndef MANUALSHIPPINGCONTAINER_H_
#define MANUALSHIPPINGCONTAINER_H_

#pragma once // prevent multiple inclusion of the header
#include "ShippingContainerr.h" //including the shipping container class
#include <string>
//creating a derived class
class ManualShippingContainer : public ShippingContainerr {

private:
   std::string manifest; //string to store the manifest

public:
   ManualShippingContainer(int ID =0); //constructor
   void setManifest( const std::string &manifest); //adding a new function called set manifest
   std::string getManifest() const override; // override to return manifest

};



#endif /* MANUALSHIPPINGCONTAINER_H_ */
