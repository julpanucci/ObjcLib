//
//  MyClass.m
//  
//
//  Created by Julian Panucci on 5/14/21.
//

#import "OldChef.h"
@import BaseLib;

@implementation OldChef

- (void)cook:(Food *)food {
	NSLog(@"Cooking food:%@", food.name);
}

@end
