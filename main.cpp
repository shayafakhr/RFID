/**
 * @file lab1.cpp
 * @author Shaya Fakhrabadi
 * @Date   10/13/2024
 * @version 1.0
 * @section DESCRIPTION
 */
// I declare that this assignment is my own work and that I have correctly
// acknowledged the work of others.  I acknowledged that I have read and
// following the Academic Honesty and Integrity related policies as
// outlined in the syllabus.
//
// _____ Shaya Fakhrabadi ____      _____13-10-2024______________
//
// ____ 301590507 ______

#include <iostream>
#include <memory>
#include <vector>
#include <unordered_map>

#include "ShippingContainerr.h"
#include "ManualShippingContainer.h"
#include "RFIDShippingContainer.h"

int main() {
    // Array of pointers to ShippingContainer objects
    ShippingContainerr* containerlist[6];

    // Add ManualShippingContainer objects
    containerlist[0] = new ManualShippingContainer(101);
    dynamic_cast<ManualShippingContainer*>(containerlist[0])->setManifest("5 crates of oranges. 2 boxes of pears.");

    containerlist[1] = new ManualShippingContainer(102);
    dynamic_cast<ManualShippingContainer*>(containerlist[1])->setManifest("7 crates of apples.");

    containerlist[2] = new ManualShippingContainer(103);
    dynamic_cast<ManualShippingContainer*>(containerlist[2])->setManifest("5 crates of kiwis. 4 crates of grapes.");

    // Add RFIDShippingContainer objects
    containerlist[3] = new RFIDShippingContainer(201);
    dynamic_cast<RFIDShippingContainer*>(containerlist[3])->add("crate of orange");
    dynamic_cast<RFIDShippingContainer*>(containerlist[3])->add("crate of orange");
    dynamic_cast<RFIDShippingContainer*>(containerlist[3])->add("crate of orange");

    containerlist[4] = new RFIDShippingContainer(202);
    dynamic_cast<RFIDShippingContainer*>(containerlist[4])->add("box of pears");
    dynamic_cast<RFIDShippingContainer*>(containerlist[4])->add("box of pears");
    dynamic_cast<RFIDShippingContainer*>(containerlist[4])->add("box of pears");
    dynamic_cast<RFIDShippingContainer*>(containerlist[4])->add("crate of apples");
    dynamic_cast<RFIDShippingContainer*>(containerlist[4])->add("crate of apples");

    containerlist[5] = new RFIDShippingContainer(203);
    dynamic_cast<RFIDShippingContainer*>(containerlist[5])->add("crate of grapes");
    dynamic_cast<RFIDShippingContainer*>(containerlist[5])->add("crate of kiwis");
    dynamic_cast<RFIDShippingContainer*>(containerlist[5])->add("crate of kiwis");

    // Output each container's manifest
    for (int i = 0; i < 6; ++i) {
        std::cout << "Container ID: " << containerlist[i]->getID() << std::endl;
        std::cout << "Manifest: " << containerlist[i]->getManifest() << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }

    // Clean up allocated memory
    for (int i = 0; i < 6; ++i) {
        delete containerlist[i];
    }

    return 0;
}
