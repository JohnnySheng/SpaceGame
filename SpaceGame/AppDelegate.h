//
//  AppDelegate.h
//  SpaceGame
//
//  Created by Ray Wenderlich on 5/15/11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}


/////////////


////

@property (nonatomic, retain) UIWindow *window;

@end
