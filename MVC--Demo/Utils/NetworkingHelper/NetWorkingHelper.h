//
//  ConnectRequest.h
//  
//
//  Created by xalo on 15/8/26.
//  Copyright (c) 2015年 . All rights reserved.
//

#import <Foundation/Foundation.h>
//声明一个协议用来传值
@protocol NetWorkingHelperDelegate <NSObject>

@required
- (void)passValueWithDic:(NSDictionary *)valueDic;

@end



@interface NetWorkingHelper : NSObject
//将协议作为该类属性
@property (nonatomic, assign) id<NetWorkingHelperDelegate>delegate;

//get请求方法
- (void)getRequesMethodWithUrlString:(NSString *)urlString parameter:(NSString *)parameter;
//urlString 请求所需要的url
//parameter 请求所需要的的参数
//post请求方法
- (void)postRequesMethodWithUrlString:(NSString *)urlString parameter:(NSString *)parameter;
@end
