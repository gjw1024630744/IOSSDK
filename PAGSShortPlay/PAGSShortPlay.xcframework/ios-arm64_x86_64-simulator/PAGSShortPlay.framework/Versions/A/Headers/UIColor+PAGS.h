//
//  UIColor+BUTheme.h
//
//  Created by cuiyanan
//  Copyright © 2020年 cuiyanan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (PAGS)

+ (UIColor *)pags_randomColor;
+ (UIColor *)pags_colorWithHEX:(NSUInteger)hex;
+ (UIColor *)pags_colorWithHEX:(NSUInteger)hex alpha:(CGFloat)alpha;

+ (UIColor *)pags_colorWithHexString:(NSString *)color;
+ (UIColor *)pags_colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

/// 解析ARGB色值，例如0xFF123456  #FF123456  FF123456，兼容RGB色值例如0x123456等
+ (UIColor *)pags_colorWithHexARGBString:(NSString *)color;
/// 解析RGBA色值，例如0x123456FF  #123456FF  123456FF，兼容RGB色值例如0x123456等
+ (UIColor *)pags_colorWithHexRGBAString:(NSString *)color;

+ (BOOL)pags_darkColorWithHexARGBString:(NSString *)color;

+ (BOOL)pags_checkIsValidColorHexString:(NSString *)color;

@end
