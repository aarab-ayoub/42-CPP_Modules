// #include <stdlib.h>
// #include <stdio.h>

// struct ListNode {
//     int val;
//     struct ListNode *next;
// };

// struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//     int len1 = 0, len2 = 0;
//     struct ListNode *temp;


// 	temp = l1;
//     while (temp) {
//         len1++;
//         temp = temp->next;
//     }

//     temp = l2;
//     while (temp) {
//         len2++;
//         temp = temp->next;
//     }


// 	int *arr1 = malloc(len1 * sizeof(int));
//     int *arr2 = malloc(len2 * sizeof(int));

//     temp = l1;
//     for (int i = 0; i < len1; i++) {
//         arr1[i] = temp->val;
//         temp = temp->next;
//     }

//     temp = l2;
//     for (int i = 0; i < len2; i++) {
//         arr2[i] = temp->val;
//         temp = temp->next;
//     }


// 	char *str1 = malloc(len1 + 1);
//     char *str2 = malloc(len2 + 1);

// 	int i = 0;
// 	while (i < len1)
// 	{
// 		str1[i] = arr1[len1 - 1 - i] + '0';

// 		i++;
// 	}
// 	str1[len1] = '\0';

// 	i = 0;
// 	while (i < len2)
// 	{
// 		str2[i] = arr2[len2 - 1 - i] + '0';
// 		i++;
// 	}
// 	str2[len2] = '\0';

// 	int i1 = len1 - 1;
// 	int i2 = len2 - 1;
// 	int carry = 0;
// 	int maxlen = (len1 > len2 ? len1 : len2) + 1;
// 	char *res = malloc(maxlen + 1);
// 	int rk = 0;

// 	while (i1 >= 0 || i2 >= 0 || carry) {
// 		int d1 = (i1 >= 0) ? (str1[i1] - '0') : 0;
// 		int d2 = (i2 >= 0) ? (str2[i2] - '0') : 0;
// 		int s = d1 + d2 + carry;
// 		res[rk++] = (s % 10) + '0';
// 		carry = s / 10;
// 		i1--; i2--;
// 	}
// 	res[rk] = '\0';

// 	struct ListNode *head = NULL;
// 	struct ListNode *current = NULL;
// 	for (int p = 0; p < rk; p++) {
// 		struct ListNode *node = malloc(sizeof(struct ListNode));
// 		node->val = res[p] - '0';
// 		node->next = NULL;
// 		if (!head) head = current = node;
// 		else { current->next = node; current = node; }
// 	}

// 	free(arr1);
// 	free(arr2);
// 	free(str1);
// 	free(str2);
// 	free(res);

// 	return head;
// }

// int main() {
// 	struct ListNode *l1 = malloc(sizeof(struct ListNode));
// 	l1->val = 9;
// 	l1->next = NULL;
	
// 	//[1,9,9,9,9,9,9,9,9,9]
// 	struct ListNode *l2 = malloc(sizeof(struct ListNode));
// 	l2->val = 1;
// 	l2->next = malloc(sizeof(struct ListNode));
// 	l2->next->val = 9;
// 	l2->next->next = malloc(sizeof(struct ListNode));
// 	l2->next->next->val = 9;
// 	l2->next->next->next = malloc(sizeof(struct ListNode));
// 	l2->next->next->next->val = 9;
// 	l2->next->next->next->next = malloc(sizeof(struct ListNode));
// 	l2->next->next->next->next->val = 9;
// 	l2->next->next->next->next->next = malloc(sizeof(struct ListNode));
// 	l2->next->next->next->next->next->val = 9;
// 	l2->next->next->next->next->next->next = malloc(sizeof(struct ListNode));
// 	l2->next->next->next->next->next->next->val = 9;
// 	l2->next->next->next->next->next->next->next = malloc(sizeof(struct ListNode));
// 	l2->next->next->next->next->next->next->next->val = 9;
// 	l2->next->next->next->next->next->next->next = malloc(sizeof(struct ListNode));
// 	l2->next->next->next->next->next->next->next->val = 9;
// 	l2->next->next->next->next->next->next->next->next = NULL;

// 	struct ListNode *result = addTwoNumbers(l1, l2);

// 	while (result) {
// 		printf("%d -> ", result->val);
// 		result = result->next;
// 	}

// 	printf("NULL\n");

// 	return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// int divide(int dividend, int divisor) {
    
//     int flag = 0;
//     long long_dividend = dividend;
//     long long_divisor = divisor;
// 	if(divisor == 0)
//         return INT_MAX;
// 	if(dividend == INT_MIN && divisor == -1)
//         return INT_MAX;
// 	if(dividend == INT_MIN && divisor == 1)
// 		return INT_MIN;
// 	if(dividend == INT_MAX && divisor == -1)
// 		return -INT_MAX;
// 	if(dividend == INT_MAX && divisor == 1)
// 		return INT_MAX;
//     if(divisor < 0)
//     {
//         long_divisor = labs(divisor);
//         flag += 1;
//     }
//     if(dividend <0)
//     {
//         long_dividend = labs(dividend);
//         flag += 1;
//     }
//     int res = 0;
//     while (long_divisor <= long_dividend)
//     {
//         long_dividend -= long_divisor;
// 		res++;
//     }
// 	if (flag == 1)
// 		res = -res;
// 	else
// 		res = res;
// 	return res;
// }


// int main()
// {
// 	int a = 7;
// 	int b = -3;
// 	int res = divide(a, b);
// 	printf("%d\n", res);
// 	return 0;
// }


