import java.util.Scanner;
import java.util.LinkedList;
import java.util.Iterator;

class LinkedList1{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        LinkedList<String> ll = new LinkedList<String>();

        while(true){
            System.out.println("1. Insert an element into the linked list");
            System.out.println("2. Remove an element from the linked list");
            System.out.println("3. List all elements with length less than 5");
            System.out.println("4. Display the LinkedList");
            System.out.println("5. Exit!");

            System.out.print("Enter your choice:\t");
            int ch = sc.nextInt();

            switch(ch){
                case 1:
                        System.out.println("Enter the element to be inserted");
                        String x = sc.next();
                        ll.add(x);
                        System.out.println("Element inserted successfully");
                        break;
                case 2:
                        if(ll.peek() == null){
                            System.out.println("The linked list is empty");
                        }
                        else{
                            System.out.println("Enter the index of the element you wanna remove");
                            int p = sc.nextInt();
                            System.out.println("The elemnet removed is: "+ll.remove(p));
                        }
                        break;
                case 3:
                        if(ll.peek() == null){
                            System.out.println("The Linked list is empty");
                        }
                        else{
                            Iterator<String> itr = ll.iterator();
                            String e1 = "";
                            System.out.println("The strings with length less than 5 are: ");
                            while(itr.hasNext()){
                                e1 = itr.next();
                                if(e1.length()<5){
                                    System.out.println(e1);
                                }
                            }
                        }
                        break;
                case 4:
                        if(ll.peek() == null){
                            System.out.println("The linked list is empty");
                        }
                        else{
                            Iterator<String> itr = ll.iterator();
                            System.out.println("The elements of the linked list are:");
                            while(itr.hasNext()){
                                System.out.println(itr.next());
                            }
                        }
                        break;
                case 5:
                        System.exit(0);
                        break;
                default:
                        System.out.println("Invalid choice");
                    
            }
        }
    }
}
