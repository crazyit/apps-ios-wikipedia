//  Created by Monte Hurd on 10/9/14.
//  Copyright (c) 2014 Wikimedia Foundation. Provided under MIT-style license; please copy and modify!

#import <Foundation/Foundation.h>
#import "FetcherBase.h"

typedef NS_ENUM(NSInteger, LoginErrorType) {
    LOGIN_ERROR_UNKNOWN = 0,
    LOGIN_ERROR_API = 1,
    LOGIN_ERROR_MISC = 2
};

@class AFHTTPRequestOperationManager;

@interface AccountLogin : FetcherBase

// Kick-off method. Results are reported to "delegate" via the FetchFinishedDelegate protocol method.
-(instancetype)initAndLoginForDomain: (NSString *)domain
                            userName: (NSString *)userName
                            password: (NSString *)password
                               token: (NSString *)token
                         withManager: (AFHTTPRequestOperationManager *)manager
                  thenNotifyDelegate: (id <FetchFinishedDelegate>)delegate;
@end
