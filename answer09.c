#include "answer09.h"

bool isCircular(const node_t * head)
{
	const node_t *slower = head;
	const node_t *faster = head;

	if(head == NULL)
	{
	return false;
	}


	while(faster->next != NULL)
	{
		faster = faster -> next; //giving pointer new address
		if(faster->next == NULL)//bc found the end of the linked list
		{
		return false;
		}
		faster = faster -> next;
		slower = slower -> next;
		if(faster == slower)
		{
		return true;
		}
		
	}
	return false;
	
}
