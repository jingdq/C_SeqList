/*
 * SeqList.h
 *
 *  Created on: 2017年10月3日
 *      Author: jingdongqi
 */

#ifndef 顺序表_SEQLIST_H_
#define 顺序表_SEQLIST_H_

#define ListSize 100
typedef int DataType;
typedef struct {
	DataType data[ListSize];
	int length;
} SeqList;

/*****************顺序表基本操作***********************/
/**
 * 顺序表第i个位置之前插入元素x
 */
void InsertList(SeqList *L, int i, DataType x);

/**
 * 删除顺序表中第i个元素
 */
DataType DeleteList(SeqList *L, int i);



#endif /* 顺序表_SEQLIST_H_ */
