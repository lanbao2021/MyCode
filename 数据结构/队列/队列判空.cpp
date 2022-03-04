bool QueueEmpty(SqQueue Q)
{
    if (Q.rear == Q.front)
        return true;
    return false;
}