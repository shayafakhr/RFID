/*
 * ManualShippingContainer.cpp
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
#include "ManualShippingContainer.h"

ManualShippingContainer::ManualShippingContainer(int id) : ShippingContainerr(id){}
void ManualShippingContainer::setManifest(const std::string &manifest){
   this->manifest = manifest;

}
std::string ManualShippingContainer::getManifest()const{
   return manifest;
   //override the getmanifest function to return this string
}



