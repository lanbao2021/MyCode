bool GetHead(SqQueue Q, ElemType &x)
{
    if (Q.rear == Q.front)
        return false;
    x = Q.data[Q.front];
    return true;
}