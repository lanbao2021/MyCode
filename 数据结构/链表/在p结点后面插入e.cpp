
bool InsertNextNode(LNode *p, ElemType e)
{
    if (p == NULL)
        return flase;
    LNode *s = (LNode *)malloc(sizeof(LNode));
    if (s == NULL)
        return false;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}
