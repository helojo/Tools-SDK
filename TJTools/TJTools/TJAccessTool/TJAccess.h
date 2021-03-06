//
//  TJAccess.h
//  TJTools
//
//  Created by xt on 2019/2/15.
//  Copyright © 2019 TJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TJAccess : NSObject

// 获取当前VC视图层
+ (UIViewController *)getCurrentVC;

// 获取显示的windows
+ (UIWindow *)lastWindow;

@end

NS_ASSUME_NONNULL_END
