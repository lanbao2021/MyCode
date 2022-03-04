bool Push(SqStack &S, ElemType x)
{
    if (S.top == MaxSize - 1)
        return false;
    S.top = S.top + 1;
    S.data[S.top] = x;
    return true;
}
