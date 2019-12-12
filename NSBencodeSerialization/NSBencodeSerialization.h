//
//  NSBencodeSerialization.h
//  DALILite
//
//  Created by Carlo Tortorella on 16/12/13.
//  Copyright (c) 2013 Carlo Tortorella. All rights reserved.
//

#import <Foundation/Foundation.h>

//! Project version number for NSBencodeSerialization.
FOUNDATION_EXPORT double NSBencodeSerializationVersionNumber;

//! Project version string for NSBencodeSerialization.
FOUNDATION_EXPORT const unsigned char NSBencodeSerializationVersionString[];

@interface NSBencodeSerialization : NSObject

+ (id)bencodedObjectWithData:(NSData *)data error:(NSError *__autoreleasing *)error;
+ (NSData *)dataWithBencodedObject:(id)object error:(NSError *__autoreleasing *)error;

@end
