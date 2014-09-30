// -*- Mode: objc -*-
//
//  AppDelegate.h
//

#import <Cocoa/Cocoa.h>
#import "AppQueue.h"
#import "Devices.h"
#import "EventQueue.h"
#import "OtherInformationStore.h"

@class KarabinerClient;
@class KeyResponder;

@interface AppDelegate : NSObject <NSApplicationDelegate> {
  NSWindow* __weak window;
  IBOutlet AppQueue* appQueue_;
  IBOutlet Devices* devices_;
  IBOutlet KarabinerClient* client_;
  IBOutlet OtherInformationStore* otherinformationstore_;
  IBOutlet KeyResponder* keyResponder_;
}

@property(weak) IBOutlet NSWindow* window;

- (IBAction)setWindowProperty:(id)sender;

@end
