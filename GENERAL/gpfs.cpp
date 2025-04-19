//
// Created by vitto on 18/04/2025.
//
#include "gpfs.h"
float gpfs::generateRandomFloatLOHI(float LO, float HI) {
    return LO + static_cast <float> (std::rand()) /(RAND_MAX /(HI-LO));
}

int gpfs::generateRandomIntLOHI(int LO, int HI) {
    return LO + ( std::rand() % ( HI - LO + 1 ) );
}