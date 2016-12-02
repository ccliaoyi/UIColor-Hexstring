//
//  UIColor+HexString.h
//  Conghua
//
//  Created by fits on 16/5/9.
//  Copyright © 2016年 fits. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (HexString)

+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

+ (UIColor *)colorWithHexString:(NSString *)color;

@end
