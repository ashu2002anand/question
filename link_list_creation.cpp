#include <bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
};

void linklisttraverse(struct Node *ptr){
	while(ptr!=NULL){
		cout<<"Data : "<<ptr->data<<endl;
		ptr=ptr->next;
	}
	return;
}

int main(){
	struct Node *Head;
	struct Node *second;
	struct Node *third;
	struct Node *fourth;
	struct Node *fifth;
	
	Head = (struct Node *)malloc(sizeof(struct Node));
	second =(struct Node *)malloc(sizeof(struct Node));
	third =(struct Node *)malloc(sizeof(struct Node));
	fourth=(struct Node *)malloc(sizeof(struct Node));
	fifth=(struct Node *)malloc(sizeof(struct Node));

	Head->data=17;
	Head->next=second;

	second->data=12;
	second->next=third;

	third->data=34;
	third->next=fourth;

	fourth->data=67;
	fourth->next=fifth;

	fifth->data=46;
	fifth->next= NULL;

	linklisttraverse(Head);

	printf("0\n");
	return 0;
}