/**
 * check_cycle - checks for cycle
 * @list: linked list
 *
 * Return: 1 (success)
 */
int check_cycle(listint_t *list)
{
	listint_t *ptr_copy[20], *fast, *slow;
	int i;

	if (!list)
		return (0);
	fast = list;
	slow = list;
	while (fast && fast->next && slow)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			return (1);
	}
	return (0);
}
