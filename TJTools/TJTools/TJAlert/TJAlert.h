//
//  TJAlert.h
//  TJTools
//
//  Created by xt on 2018/11/1.
//  Copyright © 2018年 TJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TJAlert : NSObject

/**
 Alert对象

 @return Alert对象
 */
+ (instancetype)sharedAlert;

/**
 Alert居中弹出框
 
 @param title 标题
 @param message 信息
 @param actions 按钮数组
 @param actionBlock 按钮点击事件
 @return 返回控件
 */
- (UIAlertController *)showAlertViewWithTitle:(NSString *)title message:(NSString *)message actionText:(NSArray<NSString *> *)actions resultAction:(void(^)(NSString *actionTitle))actionBlock;

/**
 Alert底部弹出框
 
 @param title 标题
 @param message 信息
 @param actions 按钮数组
 @param actionBlock 按钮点击事件
 @return 返回控件
 */
- (UIAlertController *)showActionSheetViewWithTitle:(NSString *)title message:(NSString *)message actionText:(NSArray<NSString *> *)actions resultAction:(void(^)(NSString *actionTitle))actionBlock;

/**
 获取顶部试图
 
 @return VC
 */
- (UIViewController *)getCurrentVC;

@end
