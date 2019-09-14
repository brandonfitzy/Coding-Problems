public class Main {

    /*reverse string*/

    public static void main(String[] args) {
        String str = "This is a test string";
        String newstr = reverse(str);
        System.out.println(newstr);
    }

    public static String reverse(String str){
        String reversestr = "";
        String[] originalstr = str.split("\\s+");
        for ( String word : originalstr){
            reversestr = word + " " + reversestr;
        }
        System.out.println(reversestr);
        return reversestr.trim();
    }
}
