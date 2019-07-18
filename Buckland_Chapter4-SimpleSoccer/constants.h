#ifndef CONSTANTS_H
#define CONSTANTS_H

const int WindowWidth  = 700;
const int WindowHeight = 400;


//defines the size of a team -- do not adjust
const int TeamSize = 5;

struct FieldConst {
    static const int iMaxDistFromHomeRegion = 8;

    static const int BlueAttackingRegions[TeamSize] = {1,12,14,6,4};
    //const int RedRegions[TeamSize] = {16,3,5,9,13};
    static const int RedAttackingRegions[TeamSize] = {16,3,5,7,13};

    const int BlueDefendingRegions[TeamSize] = {1,6,8,3,5};
    //const int RedRegions[TeamSize] = {16,9,11,12,14};
    const int RedDefendingRegions[TeamSize] = {16,7,10,12,14};
};

#endif