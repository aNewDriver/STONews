//
//  WKCommentVC.h
//  STONotice
//
//  Created by Ke Wang on 2019/1/14.
//  Copyright © 2019年 Bankrous.inc. All rights reserved.
//

#import "WKBaseDetailViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface WKCommentVC : WKBaseDetailViewController

@property (nonatomic, copy) void(^refreshBlock)(void);


@property (nonatomic, copy) NSString *postId;


@end

NS_ASSUME_NONNULL_END
