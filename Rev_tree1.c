#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int data;
    struct tree *lt, *rc;
};

void buildtree(struct tree *ptr)
{
    struct tree *new;
    printf("\nEnter the value of node: ");
    scanf("%d", &ptr->data);
    ptr->lt = NULL;
    ptr->rc = NULL;
    int ch;
    printf("\nDo you want to enter a left child of %d (0/1): ", ptr->data);
    scanf("%d", &ch);

    if (ch == 1)
    {
        new = (struct tree *)malloc(sizeof(struct tree));
        ptr->lt = new;
        buildtree(new);
    }
    printf("\nDo you want to enter a right chile of %d(0/1): ", ptr->data);
    scanf("%d", &ch);
    if (ch == 1)
    {
        new = (struct tree *)malloc(sizeof(struct tree));
        ptr->rc = new;
        buildtree(new);
    }
}

void in_traversal(struct tree *ptr)
{
    if (ptr == NULL)
    {
        return;
    }
    else
    {
        in_traversal(ptr->lt);
        printf("%d\t", ptr->data);
        in_traversal(ptr->rc);
    }
}


int main()
{
    int n;
    struct tree *root;
    root = (struct tree *)malloc(sizeof (struct tree));
    buildtree(root);
    printf("\nThe TREE is as follows:\n");
    in_traversal(root);
    return 0;
}