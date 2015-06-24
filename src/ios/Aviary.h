// AviaryGap - v.1.0.0
// (c) 2013 Ryan Vanderpol, me@ryanvanderpol.com, MIT Licensed.
// AviaryPlugin.h may be freely distributed under the MIT license.
//
//  AviaryPlugin.h
//

#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>
#import <AdobeCreativeSDKFoundation/AdobeCreativeSDKFoundation.h>
#import <AdobeCreativeSDKImage/AdobeCreativeSDKImage.h>

@interface Aviary : CDVPlugin <AdobeUXImageEditorViewControllerDelegate> {
    AdobeUXImageEditorViewController* aviary;
}

@property (nonatomic, retain) AdobeUXImageEditorViewController *aviary;
@property (nonatomic, retain) NSString* pluginCallbackId;
@property (nonatomic, retain) NSNumber* quality;
@property (nonatomic, retain) NSString* originalImageURI;

- (void) prepareForShow:(CDVInvokedUrlCommand*)command;
- (void) show:(CDVInvokedUrlCommand*)command;

@end
