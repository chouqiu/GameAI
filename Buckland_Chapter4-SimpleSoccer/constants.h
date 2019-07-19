#ifndef CONSTANTS_H
#define CONSTANTS_H

const int WindowWidth  = 700;
const int WindowHeight = 400;


//defines the size of a team -- do not adjust
const int TeamSize = 5;

struct FieldConst {
	static const int NumRegionsHorizontal = 7; 
	static const int NumRegionsVertical   = 4;

	static const int iMaxDistFromHomeRegion = 8;

	static const int* const BlueAttackingRegions()
	{
		static const int regions[TeamSize] = { 1,12,14,6,4 };
		return regions;
	}
	//const int RedRegions[TeamSize] = {16,3,5,9,13};
	static const int* const RedAttackingRegions()
	{
		static const int regions[TeamSize] = { 16,3,5,7,13 };
		return regions;
	}

	static const int* const BlueDefendingRegions()
	{
		static const int regions[TeamSize] = { 1,6,8,3,5 };
		return regions;
	}
    //const int RedRegions[TeamSize] = {16,9,11,12,14};
	static const int* const RedDefendingRegions()
	{
		static const int regions[TeamSize] = { 16,7,10,12,14 };
		return regions;
	}
};

#endif