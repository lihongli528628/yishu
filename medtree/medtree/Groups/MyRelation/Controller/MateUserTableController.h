//
//  MateUserTableController.h
//  medtree
//
//  Created by 陈升军 on 15/4/12.
//  Copyright (c) 2015年 sam. All rights reserved.
//

#import "TableController.h"

@class UserDTO;

@interface MateUserTableController : TableController

- (void)setUserInfo:(UserDTO *)dto;

@end
