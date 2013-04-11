//
//  GVSMS.h
//  GVoice
//
//  Created by Alex Gray on 4/11/13.
//  Copyright (c) 2013 joeygibson.com. All rights reserved.
//

#import <AtoZ/AtoZ.h>

JREnumDeclare(GVMessageType, 	GVMessage_all, 		GVMessage_inbox,
										GVMessage_missed, 	GVMessage_placed,
										GVMessage_received, 	GVMessage_sms,
										GVMessage_spam, 		GVMessage_unread,
										GVMessage_voicemail);

@interface GVMessage : BaseModel

@property (ASS) GVMessageType type;
@property (RONLY) NSS	*phoneNumber,
								*messageText,
								*displayNumber,
								*displayStartDateTime;

@property (ASS) BOOL isRead,
							star,
							isSpam,
							isTrash;

@end
