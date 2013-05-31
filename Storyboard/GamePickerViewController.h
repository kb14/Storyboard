//
//  GamePickerViewController.h
//  Storyboard
//
//  Created by Minni Arora on 30/05/13.
//  Copyright (c) 2013 Minni Arora. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GamePickerViewController;

@protocol GamePickerViewControllerDelegate <NSObject>
- (void)gamePickerViewController:
(GamePickerViewController *)controller
                   didSelectGame:(NSString *)game;
@end	

@interface GamePickerViewController : UITableViewController

@property (nonatomic, weak) id <GamePickerViewControllerDelegate> delegate;
@property (nonatomic, strong) NSString *game;

@end
