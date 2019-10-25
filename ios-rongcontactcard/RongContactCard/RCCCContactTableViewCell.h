//
//  RCCCContactTableViewCell.h
//  RongContactCard
//
//  Created by Jue on 16/3/16.
//  Copyright © 2016年 RongCloud. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RCloudImageView.h"

@interface RCCCContactTableViewCell : UITableViewCell

@property (nonatomic, strong) RCloudImageView *portraitView;

@property (nonatomic, strong) UILabel *nicknameLabel;

@property (nonatomic, strong) UILabel *userIdLabel;

@end
