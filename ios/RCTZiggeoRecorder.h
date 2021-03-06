//
//  ZiggeoRecorderRCT.h
//
//  Copyright © 2017 Ziggeo. All rights reserved.
//

#ifndef ZiggeoRecorderRCT_h
#define ZiggeoRecorderRCT_h

#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import <Ziggeo/Ziggeo.h>
#import <UIKit/UIKit.h>


@interface RCTZiggeoRecorder : RCTEventEmitter <RCTBridgeModule>

@property (strong, nonatomic) NSString *appToken;
@property (nonatomic) BOOL cameraFlipButtonVisible;
@property (nonatomic) BOOL coverSelectorEnabled;
@property (nonatomic) NSInteger camera;
@property (nonatomic) NSInteger autostartRecordingAfter;
@property (nonatomic) NSInteger maxRecordingDuration;
@property (nonatomic) NSDictionary* additionalRecordingParams;
@property (nonatomic) BOOL sendImmediately;

@property (strong, nonatomic) NSMutableArray* contexts;

@end


#endif /* ZiggeoRecorderRCT_h */

