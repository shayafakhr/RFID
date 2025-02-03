/*
 * ShippingContainerr.h
 * Shaya Fakhrabadi
 * 301590507
 *  Created on: Oct 12, 2024
 *      Author: xubuntu
 */

#ifndef SHIPPINGCONTAINERR_H_
#define SHIPPINGCONTAINERR_H_

#pragma once // prevent multiple inclusion of the header
#include <string>
using namespace std;

class ShippingContainerr {

private:
   int containerID; //container ID number as an integer

public:
   ShippingContainerr(int ID =0); //constructor
   void setID(int ID); //sets the container ID
   int getID()const; //returns the container ID

   virtual std::string getManifest()const; // Virtual function to return manifest
   virtual ~ShippingContainerr(){} //virtual destructor

};


#endif /* SHIPPINGCONTAINERR_H_ */
