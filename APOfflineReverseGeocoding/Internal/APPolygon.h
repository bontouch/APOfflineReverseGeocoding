//
//  APPolygon.h
//  APReverseGeocodingExample
//
//  Created by Sergii Kryvoblotskyi on 4/15/15.
//  Copyright (c) 2015 Sergii Kryvoblotskyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreLocation/CoreLocation.h>

@interface APPolygon : NSObject

/**
 *  Convenience initializer.
 *
 *  @param points NSArray of points
 *
 *  @return APPolygon
 */
+ (instancetype)polygonWithPoints:(NSArray *)points;

/**
 *  Designated initializer
 *
 *  @param points NSArray
 *
 *  @return APPolygon
 */
- (instancetype)initWithPoints:(NSArray *)points;

/**
 *  Checks if polygon contains given point
 *
 *  @param point CGPoint
 *
 *  @return contains point BOOL
 */
- (BOOL)containsPoint:(CGPoint)point;

#pragma mark - Mark init and new as unavailable

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

@interface APPolygon (CoreLocation)

/**
 *  Checks if polygon contains given location
 *
 *  @param location CLLocationCoordinate2D
 *
 *  @return contains location BOOL
 */
- (BOOL)containsLocation:(CLLocationCoordinate2D)location;

@end
