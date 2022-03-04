LinkList List_HeadInsert(LinkList &L)
{
    LNode *s;
    int x;
    L->next = NULL;
    scanf("%d", &x);
    while (x != 999)
    {
        s = (LNode *)malloc(sizeof(LNode));
        s->data = x;
        s->next = L->next;
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}
