//
//  LocationNav.h
//  Clean the Creeks
//
//  Created by Samuel Cardo on 2/9/16.
//  Copyright © 2016 Samuel Cardo. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreLocation/CoreLocation.h>
@interface LocationNav : UINavigationController<CLLocationManagerDelegate>
@property (strong, nonatomic) CLLocationManager *locationManager;
@end
