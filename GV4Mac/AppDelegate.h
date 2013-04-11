//
//  AppDelegate.h
//  GV4Mac
//
//  Created by Alex Gray on 4/11/13.
//  Copyright (c) 2013 joeygibson.com. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <GV/GV.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>


@property (strong) NSDictionary *smsD;

@property (assign) IBOutlet NSTV *tv;
@property (assign) IBOutlet NSArrayController *smsCTL;
@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSTextView *txtV;
@property (nonatomic, retain) GVoice *voice;

@end
