//
//  BLEntity.h
//  Blackness
//
//  Created by Kyle Reynolds on 1/1/14.
//  Copyright (c) 2014 Sky Print. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLEntity : NSObject {
    NSUInteger x;
    NSUInteger y;
    NSUInteger pitch;
    NSUInteger roll;
    NSUInteger yaw;
    
    NSString* working_directory;
    
    NSMutableDictionary* sprites;
    NSMutableDictionary* attributes;
    NSString* prototype;
    NSString* name;
    NSString* file;
    
    NSNumberFormatter* formatter;
    NSNumber* numberstore;
}

-(NSString*)getFileFromName:(NSString*)userMasterName;
-(id)initWithName:(NSString*)userEntityName;
-(id)initWithPrototype:(NSString*)userPrototype;
-(id)initWithName:(NSString*)userEntityName andPrototype:(NSString*)userEntityPrototype;

-(void)setAttribute: (NSString*)userAttribute to:(id)userValue;
-(BOOL)attribute:(NSString*)userAttribute is:(NSString*)value;


@property NSUInteger x;
@property NSUInteger y;
@property (readonly) NSString* prototype;
@property (readonly) NSString* name;

@end
