//
//  DetailViewController.h
//  c
//
//  Created by chen jesse on 12-5-4.
//  Copyright (c) 2012年 KHABELE. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
