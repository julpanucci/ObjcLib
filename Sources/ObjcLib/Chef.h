//
//  MyClass.h
//  
//
//  Created by Julian Panucci on 5/14/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class Food;
@protocol FoodEater;

@interface Chef : NSObject <FoodEater>


-(Food *)createFood:(NSString *)name;

@end

NS_ASSUME_NONNULL_END
