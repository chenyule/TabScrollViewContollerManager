#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ManagerConfig.h"
#import "ManegerView.h"
#import "ManegerViewDataSource.h"
#import "TabHeader.h"
#import "TabManger.h"
#import "TabScrollView.h"
#import "TabView.h"
#import "UIScrollView+ScollerBlock.h"
#import "UIViewController+ScrollerView.h"

FOUNDATION_EXPORT double TabScrollViewContollerManagerVersionNumber;
FOUNDATION_EXPORT const unsigned char TabScrollViewContollerManagerVersionString[];

