//
//  GVSMS.m
//  GVoice
//
//  Created by Alex Gray on 4/11/13.
//  Copyright (c) 2013 joeygibson.com. All rights reserved.
//

#import "GVMessage.h"

@implementation GVMessage

+ (instancetype) instanceWithObject:(id)object {

	GVMessage *n = self.instance;
	[n setWithDictionary:[object subdictionaryWithKeys:[self codableKeys]]];
	return n;
}

@end
