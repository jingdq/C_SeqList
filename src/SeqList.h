/*
 * SeqList.h
 *
 *  Created on: 2017年10月3日
 *      Author: jingdongqi
 */

#ifndef SEQLIST_H_
#define SEQLIST_H_

#define ListSize 100
typedef int DataType;
typedef struct {
	DataType data[ListSize];
	int length;
} SeqList;

/**
 * 顺序表第i个位置之前插入元素x
 */
void InsertList(SeqList *L, int i, DataType x);

/**
 * 删除顺序表中第i个元素
 */
DataType DeleteList(SeqList *L, int i);

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

#endif /* SEQLIST_H_ */
