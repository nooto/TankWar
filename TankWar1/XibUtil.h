//
//  XibUtil.h
//  TankWar1
//
//  Created by yq on 15/9/25.
//  Copyright © 2015年 test. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Wall.h"

@interface XibUtil : NSObject

/**
 * frame 是主视图的frame，用来计算等比例缩放
 */
- (UIView *)zoomTankWidthXibName:(NSString *)xibName;

/**
 * frame 是主视图的frame，用来计算等比例缩放
 */
- (NSMutableArray<Wall *> *)getTankWallsFromXib:(NSString *)xibName;

/**
 *改变地图
 */
- (NSMutableArray<Wall *> *)changeTankMap:(NSString *)mapName;

- (instancetype)initWithMainView:(UIView *)mainView;

+ (NSMutableArray<Wall *> *)getAllTankWalls;
@end
