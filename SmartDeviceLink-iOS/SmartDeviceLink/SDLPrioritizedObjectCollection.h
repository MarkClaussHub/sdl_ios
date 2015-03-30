//
//  SDLPrioritizedOutputCollection.h
//  SmartDeviceLink
//

@import Foundation;

@interface SDLPrioritizedObjectCollection : NSObject

- (void)addObject:(id)object withPriority:(NSInteger)priority;
- (instancetype)nextObject;

@end