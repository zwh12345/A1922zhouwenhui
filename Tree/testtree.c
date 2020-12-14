#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	TreeNode *t;
	printf("请按先序序列输入各节点的字符，某节点的左子树为空时输入一个字符#");
	printf("如输入ABD#g###CE##F##\n");
	CreateTree(t, '#');
	printf("先序遍历为: ");
	PreOrder(t);
	printf("\n");
	printf("中序遍历为: ");
	InOrder(t);
	printf("\n");
	printf("后序遍历为: ");
	PostOrder(t);
	printf("\n");
	printf("层序遍历为: ");
	LevelOrder(t);
	printf("\n");
	 }



