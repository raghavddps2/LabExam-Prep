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
            System.out.print("Enter your choice:\t");
            int ch = sc.nextInt();
            sc.nextLine();

            switch(ch){
                case 1:
                        System.out.print("Enter the String:\t");
                        String s = sc.nextLine();
                        System.out.print("\nEnter the position of the string from which you wanna start extracting:\t");
                        int n = sc.nextInt();
                        System.out.print("\nEnter the no of characters to be extracted:\t");
                        int m = sc.nextInt();
                        String k = s.substring(n-1,m+n-1);
                        System.out.println("\nThe extracted string is: "+k);
                        break;
                        
                
                case 2:
                        System.out.print("Enter the String:\t");
                        s = sc.nextLine();
                        System.out.print("\nEnter the word whose occurences you wanna find:\n");
                        k = sc.next();
                        int counter = 0;
                        String arr[] = s.split(" ");
                        for(int i=0;i<arr.length;i++){
                            if(arr[i].equals(k)){
                                counter++;
                            }
                        }
                        System.out.println("\nThe no of occurences of the word "+k+" are "+counter);
                        break;
                
                case 3:
                        System.out.print("Enter the string:\t");
                        s = sc.nextLine();
                        System.out.print("\nEnter the substring you wanna replace:\t");
                        k = sc.next();
                        System.out.print("\nEnter the substring you wanna replace with:\t");
                        String p = sc.next();
                        String t = s.replace(k,p);
                        System.out.println("\nThe new string is: "+t);
                        break;
                        
                case 4:
                        System.out.print("Enter the string:\t");
                        s = sc.nextLine();
                        k = s.toLowerCase();
                        char[] arr2 = k.toCharArray();
                        Arrays.sort(arr2);
                        p = new String(arr2);
                        System.out.println("\nThe string arranged aphabetically  is: "+p);
                        break;
                
                case 5:
                        System.out.print("Enter the string 1:\t");
                        s = sc.nextLine();
                        System.out.print("\nEnter the string 2:\t");
                        k = sc.nextLine();
                        boolean cmp = s.equalsIgnoreCase(k);
                        if(cmp){
                            System.out.println("\nThe two strings are equal");
                        }
                        else{
                            System.out.println("\nThe two strings are not equal");
                        }
                        break;
                
                case 6:
                        System.out.print("Enter the string 1:\t");
                        s = sc.nextLine();
                        System.out.print("Enter the string 2:\t");
                        k = sc.nextLine();
                        p = s+" "+k;
                        System.out.println("\nThe concatenated strings is: "+p);
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
