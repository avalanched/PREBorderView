//
//  UIView+PREBorderView.h
//  PREBorderViewSample
//
//  Created by Paul Steinhilber on 14.02.2014.
//  Copyright (c) 2014 Paul Steinhilber. All rights reserved.
//

#import <UIKit/UIKit.h>

enum PREBorderPosition {
    PREBorderPositionTop,
    PREBorderPositionBottom,
    PREBorderPositionLeft,
    PREBorderPositionRight
};

@interface UIView (PREBorderView)

@property (nonatomic,retain) UIColor* defaultBorderColor;

- (void)addOneRetinaPixelBorder;
- (void)addOneRetinaPixelBorderWithColor:(UIColor*)color;

- (CALayer *)addOneRetinaPixelLineAtPosistion:(enum PREBorderPosition)position;
- (CALayer *)addOneRetinaPixelLineWithColor:(UIColor*)color atPosistion:(enum PREBorderPosition)position;

- (CALayer *)addLineWithWidth:(float)pixelWidth atPosistion:(enum PREBorderPosition)position;
- (CALayer *)addLineWithColor:(UIColor*)color andWidth:(float)pixelWidth atPosistion:(enum PREBorderPosition)position;

@end
