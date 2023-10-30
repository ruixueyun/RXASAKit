//
//  RXASAService.h
//  RXASAKit
//
//  Created by 陈汉 on 2023/10/30.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface RXASAService : NSObject

/**
 * 获取SDK实例（单例）
 */
+ (instancetype)sharedSDK;

- (void)getASAInfoWithComplete:(void(^)(NSDictionary *response))complete;

@end

NS_ASSUME_NONNULL_END
