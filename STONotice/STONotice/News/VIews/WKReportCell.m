//
//  WKReportCell.m
//  STONotice
//
//  Created by Ke Wang on 2019/3/14.
//  Copyright © 2019 Bankrous.inc. All rights reserved.
//

#import "WKReportCell.h"

@interface WKReportCell ()

@property (nonatomic, strong) UIImageView *headerV;
@property (nonatomic, strong) UILabel *nameL;



@end

@implementation WKReportCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

@end
