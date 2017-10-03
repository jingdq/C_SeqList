/*
 * SeqListExample.h
 *
 *  Created on: 2017年10月3日
 *      Author: jingdongqi
 */
#include "顺序表/SeqList.h"
#ifndef SEQLISTEXAMPLE_H_
#define SEQLISTEXAMPLE_H_
/**********************************应用***************************/
/**
 * 合并两个线性表
 */
void _union(SeqList *LA, SeqList *LB);

/**
 * 删除线性表中的重复元素
 */
void purge(SeqList *LA);

/**
 * 逆置顺序表
 */
SeqList Converts(SeqList *L);


#endif /* SEQLISTEXAMPLE_H_ */
