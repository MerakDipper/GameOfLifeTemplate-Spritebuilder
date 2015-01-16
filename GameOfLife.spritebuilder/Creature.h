//
//  Creature.h
//  GameOfLife
//
//  Created by 张璇 on 15/1/16.
//  Copyright (c) 2015年 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite

// stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;

// stores the amount of living neighbors
@property (nonatomic, assign) NSInteger livingNeighbors;

- (id)initCreature;

@end