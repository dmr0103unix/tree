#include<iostream>
#include<vector>
using namespace std;
struct NODE{
	int _data;
	NODE *_lchild,*_rchild;
};
struct PTree{
	NODE nodes[max_tree_size];
	int n;
};
void dfs(NODE *node){
	if(node!=NULL)
		cout<< node->_data;	
	if(node->_lchild != NULL)
		dfs(node->_lchild);
	if(node->_rchild != NULL)
		dfs(node->_rchild);
}
void cleanTree(PTree *T){
	T->n=0;
}
void CreateTree(PTree *T)
{ 
  LinkQueue q;
  QElemType p,qq;
  int i=1,j,l;
  char c[MAX_TREE_SIZE]; 
  InitQueue(&q);
  scanf("%c%*c",&T->nodes[0].data);
  if(T->nodes[0].data!= NULL ) 
  {
    T->nodes[0].parent=-1; 
    qq.name=T->nodes[0].data;
    qq.num=0;
    EnQueue(&q,qq); 
    while(i<MAX_TREE_SIZE&&!QueueEmpty(q)) 
    {
      DeQueue(&q,&qq);
      printf("按順序入節點%c的所有孩子: ",qq.name);
      gets(c);
      l=strlen(c);
      for(j=0;j<l;j++)
      {
        T->nodes[i].data=c[j];
        T->nodes[i].parent=qq.num;
        p.name=c[j];
        p.num=i;
        EnQueue(&q,p);
        i++;
      }
    }
    if(i>MAX_TREE_SIZE)
    {
      printf("超過容量\n");
      exit(OVERFLOW);
    }
    T->n=i;
  }
  else
    T->n=0;
}
int main(){
	
};
