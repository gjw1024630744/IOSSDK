//
//  UILabel+PAGS.h
//  PAGSShortPlay
//
//  Created by ByteDance on 2025/12/11.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (PAGS)

- (CGSize)pags_measureSize;

@end

@interface UILabel (PAGS_RTL)

/// 对齐方式自适应RTL
- (void)pags_resettextAlignmentToFitRTL;

/// RTL 自适应
/// @warning  请在该lable 被添加到父视图后再调用该方法
- (void)pags_autoFitRTL;

@end



NS_ASSUME_NONNULL_END
