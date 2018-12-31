import java.util.Scanner;
import java.util.Arrays;
class strings{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        System.out.println("1. Extract a portion of a string");
        System.out.println("2. Count the occurences of a particular word in a string");
        System.out.println("3. Replace a substring in a given string");
        System.out.println("4. Rearrange the strings in alphabetical order");
        System.out.println("5. Compare two strings ignoring case");
        System.out.println("6. Concatenate two strings");
        System.out.println("7. Exit!");

        while(true){
            System.out.println("Enter your choice");
            int ch = sc.nextInt();
            sc.nextLine();

            switch(ch){
                case 1:
                        System.out.println("Enter the String");
                        String s = sc.nextLine();
                        System.out.println("Enter the position of the string from which you wanna start extracting");
                        int n = sc.nextInt();
                        System.out.println("Enter the no of characters to be extracted");
                        int m = sc.nextInt();
                        String k = s.substring(n-1,m);
                        System.out.println("The extracted string is: "+k);
                        break;
                
                case 2:
                        System.out.println("Enter the String");
                        s = sc.nextLine();
                        System.out.println("Enter the string whose occurences you wanna find");
                        k = sc.next();
                        int counter = 0;
                        String arr[] = s.split(" ");
                        for(int i=0;i<arr.length;i++){
                            if(arr[i].equals(k)){
                                counter++;
                            }
                        }
                        System.out.println("The no of occurences of the word "+k+" are "+counter);
                        break;
                
                case 3:
                        System.out.println("Enter the string");
                        s = sc.nextLine();
                        System.out.println("Enter the substring you wanna replace");
                        k = sc.next();
                        System.out.println("Enter the substring you wanna replace with");
                        String p = sc.next();
                        String t = s.replace(k,p);
                        System.out.println("The new string is: "+t);
                        break;
                        
                case 4:
                        System.out.println("Enter the string");
                        s = sc.nextLine();
                        k = s.toLowerCase();
                        char[] arr2 = k.toCharArray();
                        Arrays.sort(arr2);
                        p = new String(arr2);
                        System.out.println("The new aplhabetical string is: "+p);
                        break;
                
                case 5:
                        System.out.println("Enter the string 1 ");
                        s = sc.nextLine();
                        System.out.println("Enter the string 2");
                        k = sc.nextLine();
                        boolean cmp = s.equalsIgnoreCase(k);
                        if(cmp){
                            System.out.println("The two strings are equal");
                        }
                        else{
                            System.out.println("The two strings are not equal");
                        }
                        break;
                
                case 6:
                        System.out.println("Enter the string 1");
                        s = sc.nextLine();
                        System.out.println("Enter the string 2");
                        k = sc.nextLine();
                        p = s+" "+k;
                        System.out.println("The concatenated strings is: "+p);
                        break;
                case 7:
                        System.exit(0);
                        break;
                default:
                        System.out.println("Invalid choice");
            }
        }
    }
}