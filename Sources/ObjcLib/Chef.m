//
//  MyClass.m
//  
//
//  Created by Julian Panucci on 5/14/21.
//

#import "Chef.h"
@import BaseLib;


@implementation Chef

-(Food *)createFood:(NSString *)name {
	Food *someFood = [[Food alloc] initWithName: name];
	someFood.name = name;
	return someFood;
}

- (void)eatFood {
	NSLog(@"EAting food");
}



@end
