//
//  QMAgentInformation.h
//  moorV7SDK
//
//  Created by lishuijiao on 2021/1/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 当前客服状态
 */
typedef enum: NSInteger {
    QMKStatusRobot = 0, // 机器人
    
    QMKStatusOnline = 1, // 坐席在线
    
    QMKStatusOffline = 2, // 坐席离线
    
    QMKStatusClaim = 3, // 会话被领取
    
    QMKStatusFinish = 4, // 会话被结束
    
    QMKStatusManualButton = 5, //转人工按钮
    
    QMKStatusQueueNum = 6, //排队数
}QMKStatus;

/**
 socket链接状态
 */
typedef enum: NSInteger {
    QMSocketConnectStatusDisconnected   = -1,    //未连接
    
    QMSocketConnectStatusConnecting     = 0,     //连接中
    
    QMSocketConnectStatusConnected      = 1,     //已连接
}QMSocketConnectStatus;

/**
 客服操作项
 */
typedef enum : NSUInteger {
    typeNotice = 0,  //对方正在输入…
    
    withdrawMessage = 1,  //撤回消息
    
    investigate = 2,   //满意度评价
    
    investigateNew = 3,  //满意度评价 (新增类型)
}QMKOperationStatus;

@interface QMAgentInformation : NSObject

/**
 坐席(客服)工号
 */
@property (nonatomic, copy) NSString * exten;

/**
 坐席(客服)名称
 */
@property (nonatomic, copy) NSString * name;

/**
 坐席(客服)头像
 */
@property (nonatomic, copy) NSString * icon_url;

/**
 坐席(客服)类型
 */
@property (nonatomic, copy) NSString * type;

@end


@interface QMChatInformation : NSObject

@property (nonatomic, copy) NSString *messageId;

@property (nonatomic, copy) NSString *sessionId;

@property (nonatomic, copy) NSNumber *number;

@property (nonatomic, assign) QMKStatus kStatus;

@end

NS_ASSUME_NONNULL_END
