int merger(int *a, int *b, int *c)
{
    int array[10];
    for(int i=0;i<5;++i)array[i]=*(a+i);
    for(int i=0;i<5;++i)array[i+5]=*(b+i);
    for(int i=0; i<10;++i)
    {
        int index_of_smallest = i;
        for(int j=i; j<10; j++)
        {
            if (array[j]<array[index_of_smallest])
                index_of_smallest = j;
        }
        int temp = array[i];
        array[i] = array[index_of_smallest];
        array[index_of_smallest] = temp;
    }
    for(int i=0;i<10;++i)*(c+i)=array[i];
}
