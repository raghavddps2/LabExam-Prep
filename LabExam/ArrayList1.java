import java.util.*;

class ArrayList1{
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        ArrayList<String> Q = new ArrayList<String>();
           
        while(true){
            System.out.println("1. Enqueue");
            System.out.println("2. Dequeue");
            System.out.println("3. Peak Element");
            System.out.println("4. Display");
            System.out.println("5. Exit!");

            System.out.println("Enter your choice");
            int ch = sc.nextInt();

            switch(ch){
                case 1:
                        System.out.println("Enter the string you wanna Enqueue");
                        String x = sc.next();
                        Q.add(Q.size(),x);
                        System.out.println("Element enqueued successfully");
                        break;
                
                case 2:
                        if(Q.isEmpty()){
                            System.out.println("The Queue is empty");
                        }
                        else{
                            System.out.println("The element dequeued is: "+Q.remove(0));
                        }
                        break;
                case 3:
                        if(Q.isEmpty()){
                            System.out.println("The Queue is empty");
                        }
                        else{
                            System.out.println("The element at the peak is :"+Q.get(0));
                        }
                        break;
                case 4:
                        if(Q.isEmpty()){
                            System.out.println("The Queue is empty");
                        }
                        else{
                            System.out.println("The elements of the queue are:");
                            for(int i=0;i<Q.size();i++){
                                System.out.println(Q.get(i));
                            }
                        }
                        break;
                case 5:
                        System.exit(0);
                        break;
                default:
                        System.out.println("Invalid choice!");
            }
    }
}
}
