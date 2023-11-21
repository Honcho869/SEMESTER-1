void sortarray(int array[],int n)
{
    for(int i=0; i<n;++i)
    {
        //finding the smallest number in the subarray
        int index_of_smallest = i;
        for(int j=i; j<n; j++)
        {
            if (array[j]<array[index_of_smallest])
                index_of_smallest = j;
        }

        //swapping
        int temp = array[i];
        array[i] = array[index_of_smallest];
        array[index_of_smallest] = temp;
    }
}
