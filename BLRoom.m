//
//  BLRoom.m
//  Blackness
//
//  Created by Kyle Reynolds on 1/1/14.
//  Copyright (c) 2014 Sky Print. All rights reserved.
//

#import "BLRoom.h"

@implementation BLRoom

@synthesize space;
//This should be visible on both master and black-minus
-(id)initWithRows:(NSUInteger)rows andColumns:(NSUInteger)columns {
    space = [[NSMutableArray alloc] initWithCapacity:rows*columns];
    number_of_rows = rows;
    number_of_columns = columns;
    return self;
}

@end
