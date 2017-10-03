/*
 * LinkList.h
 *
 *  Created on: 2017年10月3日
 *      Author: jingdongqi
 */

#ifndef 链表_LINKLIST_H_
#define 链表_LINKLIST_H_
typedef int DataType;
typedef struct node {
	DataType data;
	struct node *next;

} ListNode;
typedef ListNode *LinkList;
ListNode *p; //定义一个指向节点的指针变量
LinkList head; //定义头指针
/**************************链表的基本操作**********************/
/**
 * 头插法创建单链表
 */
LinkList CreateListF();

/**
 * 尾插法建表
 */
LinkList CreateListR();
/**
 * 引入头结点 尾插法建表
 */
LinkList CreateListR();

/**
 * 按索引查找 获取链表中的第i个节点
 */
ListNode * GetNodei(LinkList head, int i);

/**
 * 按节点值查找
 */
ListNode * GetNodei(LinkList head, DataType x);

/**
 * 插入 在链表第i个位置上插入节点
 */

void InsertList(LinkList head, int i, DataType x);

/**
 * 删除链表的第i个节点
 *
 */

void DeleteList(LinkList head, int i);


#endif /* 链表_LINKLIST_H_ */
