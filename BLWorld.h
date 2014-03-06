//
//  BLWorld.h
//  Blackness
//
//  Created by Kyle Reynolds on 1/11/14.
//  Copyright (c) 2014 Sky Print. All rights reserved.
//

#import <Foundation/Foundation.h>
@class BLEntity;

@interface BLWorld : NSObject {
    NSMutableArray* entity_list;
    NSMutableDictionary* unchanged_lists;

}

+(id)init;
+(BLWorld*)sharedWorld;

-(void)add: (BLEntity*)userEntity;

+(BOOL)load;
+(BOOL)save;
+(BOOL)append;


//The entity family returns "I'm Feeling Lucky" of entities with the exact attributes: The entities family returns a list.

-(NSMutableArray*)all;
-(BLEntity*)entityOfAttribute:(NSString*)userAttribute equals:(NSString*)userMatchValue;
-(BLEntity*)entityOfAttributes:(NSDictionary*)userAttributeList;

-(NSMutableArray*)entitiesOfAttribute:(NSString*)userAttribute equals:(NSString*)userMatchValue;
-(NSMutableArray*)entitiesOfAttributes:(NSDictionary*)userAttributeList;

@end
