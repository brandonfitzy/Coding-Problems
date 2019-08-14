/*DCP 241*/

/*h index calculator*/

/*A researchers h index is calculated if h of their N papers has h or more citations*/

public class Program
{
	public static void main(String[] args) {
		//each index is a single papers number of citations
		int arr[]={4,3,0,1,5,4,6};
		int x=0;
		int h=0;
		for (int i=0; i<arr.length; i++){
		    for(int j=0; j<arr.length; j++){
		        if (i<=arr[j]){
		            x++;
		        }
		    }
		    if (x>=i){
		        h=i;
		        x=0;
		    }
		}
		System.out.print(h);
	}
}
