/*
 * ShippingContainerr.cpp
 * shaya fakhrabadi
 * 301590507
 *  Created on: Oct 5, 2024
 *      Author: xubuntu
 */
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <string_view>
#include "ShippingContainerr.h"
// purpose of this function is to return the contents of shipping container
ShippingContainerr::ShippingContainerr(int ID) : containerID(ID){}

void ShippingContainerr::setID(int ID){
   containerID=ID; // we set the container ID to give us ID
}
int ShippingContainerr::getID()const{
   return containerID;
}
std::string ShippingContainerr::getManifest() const{
   return "";  // getManifest should return an empty string
}
