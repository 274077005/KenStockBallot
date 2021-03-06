//
//  KSBStockInfo.h
//  KenStockBallot
//
//  Created by ken on 15/5/27.
//  Copyright (c) 2015年 ken. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KSBStockInfo : NSObject

@property (nonatomic, strong) NSString *stockJiaoYS;          //交易所
@property (nonatomic, strong) NSString *stockName;            //申购简称
@property (nonatomic, strong) NSString *stockCode;            //申购代码
@property (nonatomic, assign) CGFloat stockPrice;             //发行价
@property (nonatomic, assign) NSInteger stockBuyMax;          //申购上限（申购股数）
@property (nonatomic, assign) CGFloat stockBallot;            //预估中签率

//新加
@property (nonatomic, strong) NSString *stockDate;            //申购日期

@property (nonatomic, assign) NSInteger suggestionBuy;          //建议申购股数，这个属性不保存，只用作计算中转值
@property (nonatomic, assign) CGFloat suggestionMoney;          //建议申购股数对应需要钱数，这个属性不保存，只用作计算中转值

- (NSDictionary *)getStockDictionary;

- (NSInteger)getMeiQianGuShu;
- (NSInteger)getShengGouBeiShu;
- (CGFloat)getShengGouMoney;
- (CGFloat)getShengGouBallot;
- (CGFloat)getTenThoundBallot;
- (CGFloat)getSuggestionBallot;

@end

@interface NSDictionary (returnStockInfo)
-(KSBStockInfo *) returnStockInfo;
@end
