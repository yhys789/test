//
//  DetailViewController.h
//  test
//
//  Created by wn on 13-3-12.
//  Copyright (c) 2013年 wn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
