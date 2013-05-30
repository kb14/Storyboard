//
//  PlayerDetailsViewController.h
//  Storyboard
//
//  Created by Minni Arora on 30/05/13.
//  Copyright (c) 2013 Minni Arora. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PlayerDetailsViewController;

@protocol PlayerDetailsViewControllerDelegate <NSObject>
- (void)playerDetailsViewControllerDidCancel:
(PlayerDetailsViewController *)controller;
- (void)playerDetailsViewControllerDidSave:
(PlayerDetailsViewController *)controller;
@end

@interface PlayerDetailsViewController : UITableViewController

@property (nonatomic, weak) id <PlayerDetailsViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UILabel *detailLabel;

- (IBAction)cancel:(id)sender;
- (IBAction)done:(id)sender;

@end
