public class Main {

    /*reverse chars*/

    public static void main(String[] args) {
        String str = "This is a test string";
        String newstr = reverse(str);
        System.out.println(newstr);
    }

    public static String reverse(String str){
        String reversestr = "";
        for ( int i=str.length()-1 ; i>=0 ; i--){
            reversestr=reversestr + str.charAt(i);
        }
        
        return reversestr;
    }
}
