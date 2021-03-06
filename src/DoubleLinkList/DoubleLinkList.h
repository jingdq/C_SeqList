typedef int DataType;
typedef struct dlnode {
	DataType data;
	struct dlnode *prior, *next;
} DLNode;

typedef DLNode *DLinkList;
DLinkList head;

/**
 * 将值为x的新节点插入到带头结点的双向链表中指定节点*p之前
 */
void DLInsert(DLNode *p ,DataType x);

/**
 * 将单链表转换为双链表
 */
void tarns(DLinkList head);
