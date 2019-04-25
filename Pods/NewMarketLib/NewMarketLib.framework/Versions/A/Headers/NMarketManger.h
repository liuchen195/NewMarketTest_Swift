//
//  NMarketManger.h
//  NMFramework
//
//  Created by 刘琛 on 2019/3/19.
//  Copyright © 2019年 刘琛. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^NMarketMangerFaildBlock)(NSError *error);

@interface NMarketManger : NSObject

+ (void)initWithPhoneNumber:(NSString *) phone
                      faild:(NMarketMangerFaildBlock) fail;

@end

NS_ASSUME_NONNULL_END
