//
//  LocationDelegate.h
//  BackgroundGeolocation
//
//  Created by Marian Hello on 14/09/2016.
//  Copyright © 2016 mauron85. All rights reserved.
//

#ifndef LocationDelegate_h
#define LocationDelegate_h

#import "Location.h"
//#import "LocationController.h"

typedef NS_ENUM(NSInteger, BGAuthorizationStatus) {
    NOT_DETERMINED = 0,
    ALLOWED = 1,
    DENIED = 2
};

@protocol LocationDelegate <NSObject>

- (void) onAuthorizationChanged:(BGAuthorizationStatus)authStatus;
- (void) onLocationChanged:(Location*)location;
- (void) onStationaryChanged:(Location*)location;
- (void) onLocationPause;
- (void) onLocationResume;
- (void) onError:(NSError*)error;

@end

#endif /* LocationDelegate_h */
