#include <stdio.h>

struct Node
{
    int value;
    struct Node *next;
};

int main(void)
{
    struct Node first;
    struct Node second;
    struct Node third;
    struct Node *current = NULL;

    first.value = 10;
    second.value = 20;
    third.value = 30;

    first.next = &second;
    second.next = &third;
    third.next = NULL;

    current = &first;

    while (current != NULL)
    {
        printf("%d -> ", current->value);
        current = current->next;
    }

    printf("NULL\n");

    return 0;
}

// Made with Bob
