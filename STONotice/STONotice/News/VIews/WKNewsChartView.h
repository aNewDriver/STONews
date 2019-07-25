//
//  WKNewsChartView.h
//  STONotice
//
//  Created by Ke Wang on 2019/3/11.
//  Copyright © 2019 Bankrous.inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WKNewsChartView : UIView

- (void)drawChartLayerWithDataItems:(nonnull NSArray *)dataItems
                             colors:(nonnull NSArray <UIColor *> *)colors
                             titles:(NSArray <NSString *> *)titles
                            atFrame:(CGRect)frame;


@end

NS_ASSUME_NONNULL_END
