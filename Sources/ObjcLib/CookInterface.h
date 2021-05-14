//
//  MyClass.h
//  
//
//  Created by Julian Panucci on 5/14/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class Food;


@protocol CookInterface <NSObject>


-(void)cook:(Food *)food;

@end

NS_ASSUME_NONNULL_END
