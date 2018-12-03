//
//  SendMessageToWXReq+requestWithTextOrMediaMessage.h
//  SDKSample
//
//  Created by Jeason on 15/7/14.
//
//


#import <SNWeChatSDK/WXApiObject.h>

@interface SendMessageToWXReq (requestWithTextOrMediaMessage)

+ (SendMessageToWXReq *)requestWithText:(NSString *)text
                         OrMediaMessage:(WXMediaMessage *)message
                                  bText:(BOOL)bText
                                InScene:(enum WXScene)scene;
@end
