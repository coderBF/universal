//
//  TableViewCell.h
//  UniversalApp
//
//  Created by yxzc on 2017/8/1.
//  Copyright © 2017年 yxzc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CellModel.h"

@interface TableViewCell : UITableViewCell

@property (nonatomic,strong) CellModel * model;
@end
