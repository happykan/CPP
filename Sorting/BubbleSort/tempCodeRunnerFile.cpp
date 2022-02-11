for (int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+i];
                arr[j+i] = temp;
            }
        }
    }