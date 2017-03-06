//
//  ScreenBrightness.h
//  ScreenBrightness
//
//  Created by Atticus White on 12/7/15.
//  Copyright © 2015 Atticus White. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#if __has_include(<React/RCTAssert.h>)
// Use RN@0.40+ React headers
#import <React/RCTBridgeModule.h>
#else
// Otherwise backward compatible support for <RN@0.40
#import "RCTBridgeModule.h"
#endif

@interface ScreenBrightness : NSObject<RCTBridgeModule>

@end
