//
//  BLRoom.h
//  Blackness
//
//  Created by Kyle Reynolds on 1/1/14.
//  Copyright (c) 2014 Sky Print. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BLEntity.h"

@interface BLRoom : NSObject {
    NSUInteger number_of_rows;
    NSUInteger number_of_columns;
    NSMutableArray* space;
}

@property NSMutableArray* space;

-(id)initWithRows:(NSUInteger)rows andColumns:(NSUInteger)columns;
-(NSUInteger)x:(NSUInteger)xPos y:(NSUInteger)yPos;

-(void)moveEntity:(BLEntity*)movedEntity toX:(NSUInteger)x andY:(NSUInteger)y;
-(void)removeEntity:(BLEntity*)removedEntity atX:(NSUInteger)x andY:(NSUInteger)y;
-(void)addEntity:(BLEntity*)addedEntity atX:(NSUInteger)x andY:(NSUInteger)y;


//idea from #iphonedev: use a single 1d array and divide by length to get the position x,y.
//x = index % numberOfColumns; y = index / numberOfColumns;
@end
