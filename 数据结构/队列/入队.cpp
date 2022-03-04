bool EnQueue(SqQueue &Q, ElemType x)
{
    if ((Q.rear + 1) % MaxSize == Q.front) // 牺牲一个存储单元
        return false;
    Q.data[Q.rear] = x;
    Q.rear = (Q.rear + 1) % MaxSize; // 用模运算将存储空间在逻辑上变成环状
    return true;
}