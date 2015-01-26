//  SDLSoftButton.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/SDLRPCMessage.h>

#import <AppLink/SDLSoftButtonType.h>
#import <AppLink/SDLImage.h>
#import <AppLink/SDLSystemAction.h>

@interface SDLSoftButton : SDLRPCStruct {}

-(id) init;
-(id) initWithDictionary:(NSMutableDictionary*) dict;

@property(strong) SDLSoftButtonType* type;
@property(strong) NSString* text;
@property(strong) SDLImage* image;
@property(strong) NSNumber* isHighlighted;
@property(strong) NSNumber* softButtonID;
@property(strong) SDLSystemAction* systemAction;

@end