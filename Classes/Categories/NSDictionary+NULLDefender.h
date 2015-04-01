//
//  NSDictionary+NULLDefender.h
//  ProjectHelpers
//
//  Created by Sergey P. on 12.07.12.
//  Copyright (c) 2015 Sergey P. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (NULLDefender)

- (id)nullableValueForKey:(NSString *)key;
- (NSNumber*)numberForKey:(NSString*)key;

@end
