#include<iostream>
using namespace std;
struct node * insert1(struct node *start, int item);
struct node * insert2(struct node *start, int item);
struct node * insert3(struct node *start, int item,int ele);
struct node * insert4(struct node *start, int item);
struct node
{
	int data;
	struct node *link;
};
int main()
{
	struct node *start = NULL;
	int i, item, ele;
	
	while (1)
	{

		cout << "1.insertion to empty list     2.deletion      3.traversal      4.search     5.insertion at the beginning  6.insertion at a given position     7.insertion at the end     8.exit";
		cin >> i;
		switch (i)
		{
			case 1:
			{
				cout << "enter element";
				cin >> item;
				start = insert1(start, item);
				break;

				/*case 2:c=del();
					break;
				case 3:traverse(start);
					break;
				case 4:search();
					break;*/
			}
			case 5:
			{
				cout << "enter element";
				cin >> item;
				start = insert2(start, item);
				break;
			}
			case 6:
			{
				cout << "enter element";
				cin >> item;
				cin >> ele;
				start = insert3(start, item, ele);
				break;
			}
			case 7:
			{
				cout << "enter element";
				cin >> item;
				start = insert4(start, item);
				break;
			}
			case 8:
			{
				break;
			}
		}// end switch
		
	}	// end while

	getchar();
	return 0;
}
struct node * insert1(struct node *start,int item)
{
	if (start == NULL)
	{
		struct node *tmp=new node;
		tmp->data = item;
		tmp->link = start;
		start = tmp;
		return start;
	}

}
struct node * insert2(struct node *start, int item)
{
	struct node *tmp=new node;
	tmp->data = item;
	tmp->link = start;
	start = tmp;
	return start;
}
struct node * insert3(struct node *start, int item,int ele)
{
	struct node *p, *tmp=new node;
	p = start;
	while (p != NULL && p->data != ele)
	{
		p = p->link;
	}
	if (p != NULL)
	{
		tmp->data = item;
		tmp->link = p->link;
		p->link = tmp;
		return start;
	}


}
struct node * insert4(struct node *start, int item)
{
	struct node *tmp = new node;
	struct node *p;
	p = start;
	while (p->link != NULL)
		p = p->link;
	tmp->data = item;
	tmp->link = NULL;
	p->link = tmp;
	return start;

}

/*int del()
{

}*/
void traverse(struct node *start)
{
	struct node *p;
	p = start;
	while (p != NULL)
		cout << p->data;
}
/*void search()
{

}*/