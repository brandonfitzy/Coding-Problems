    public static void main(String[] args)
    {
        int x=0;
        int arr[] = {2,7,4,9,12,43,12,4,8};
        for ( int i=0 ; i<arr.length ; i++ )
        {
            if (x < arr[i])
            {
                x=arr[i];
            }
        }
        System.out.print("The largest number in the array is " + x);
    }
