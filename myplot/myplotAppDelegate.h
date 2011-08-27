//
//  myplotAppDelegate.h
//  myplot
//
//  Created by Robert Gadbois on 8/26/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class myplotViewController;

@interface myplotAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet myplotViewController *viewController;

@end
