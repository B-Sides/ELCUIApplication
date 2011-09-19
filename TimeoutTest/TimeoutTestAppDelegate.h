//
//  TimeoutTestAppDelegate.h
//  TimeoutTest
//
//  Created by Brandon Trebitowski on 9/19/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TimeoutTestViewController;

@interface TimeoutTestAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet TimeoutTestViewController *viewController;

@end
