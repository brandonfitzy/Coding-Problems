import java.util.Arrays;

/*
* This function takes any array of integers, and returns a new array such that each element at
* index i of the new array is the product of all the numbers in the original
* array except the one at i.
* */



public class DCP2 {

    public static void main(String[] args){
        int[] arr = {1,2,3,4,5};
        int length = arr.length;
        int[] newarr = new int[length];

        for (int i=0; i<length; i++) {
            int product = 1;
            for (int j=0; j<length; j++){
                if (i!=j){
                    newarr[i]=product*arr[j];
                    product=newarr[i];
                }
            }
        }
    System.out.println(Arrays.toString(newarr));


    }
}
