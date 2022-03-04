#include <stdlib.h>
#define InitSize 10
void InitList(SeqList &L)
{
    L.data = (int *)malloc(InitSize * sizeof(int));
    L.length = 0;
    L.MaxSize = InitSize;
}
