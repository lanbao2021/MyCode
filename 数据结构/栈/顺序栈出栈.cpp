bool Pop(SqStack &S, ElemType &x)
{
    if (S.top == -1)
        return false;
    x = S.data[S.top];
    S.top = S.top - 1;
    return true;
}