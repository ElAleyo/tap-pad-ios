//
//  ViewController.h
//  TapPad
//
//  Created by Dmitri Cherniak on 8/11/13.
//  Copyright (c) 2013 Dmitri Cherniak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TapPadViewController : UIViewController

@property (nonatomic, weak) IBOutlet UIButton *playControlButton;
@property (nonatomic, weak) IBOutlet UIView *buttonEnclosure;
@property (nonatomic, assign) CGFloat rate;
@property (nonatomic, assign) NSInteger collisionsLimit;
@property (nonatomic, assign) NSInteger movesLimit;


@end
