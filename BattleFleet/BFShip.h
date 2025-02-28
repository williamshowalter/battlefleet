//
//  BFShip.h
//  BattleFleet
//
//  Created by William Showalter on 15/03/05.
//  Copyright (c) 2015 UAF CS372. All rights reserved.
//

#ifndef __BattleFleet__BFShip__
#define __BattleFleet__BFShip__

#include <stdio.h>
#include <utility>

enum Direction { NORTH, EAST, SOUTH, WEST };
typedef std::pair<unsigned int,unsigned int> boardCoordinate;

class BFShip {
public:
	
	BFShip(unsigned int x, unsigned int y, unsigned int length, Direction Direction);
	const boardCoordinate getPosition() const;
	const unsigned int getLength() const;
	const Direction getDirection() const;
	
	bool operator == (const BFShip & rhs) const;
    
private:
    
	unsigned int _xCoordinate;
	unsigned int _yCoordinate;
	unsigned int _length;
	Direction _direction;
	
};

#endif /* defined(__BattleFleet__BFShip__) */
