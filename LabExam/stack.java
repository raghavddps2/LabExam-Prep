import java.util.Scanner;
class stack{
    int top;
    int size;
    int stack[];

    stack(int size,int top){
        this.size = size;
        this.top = top;
        this.stack = new int[size];
    }
    public void push(int ele){
        if(top == size-1){
            System.out.println("Stack Overflow");
        }
        else{
            stack[++top] = ele;
            System.out.println("Element successfully inserted");
        }
    }

    public int pop(){
        if(top == -1){
            return -1;
        }
        else{
            return stack[top--];
        }
    }

    public void display(){
        if(top == -1){
            System.out.println("The stack is empty");
        }
        else{
            System.out.println("The elemnets of the stack are:\t");
            for(int i=top;i>=0;i--){
                System.out.print(stack[i]+" ");
            }
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the stack:\t");
        int size = sc.nextInt();

        stack s1 = new stack(size,-1);

        System.out.println("1. Push");
        System.out.println("2. Pop");
        System.out.println("3. Display");
        System.out.println("4. Exit!");

        while(true){
            System.out.print("\nEnter your choice:\t");
            int ch = sc.nextInt();

            switch(ch){
                case 1:
                        System.out.print("Enter the element you want to insert:\t");
                        int ele1 = sc.nextInt();
                        s1.push(ele1);
                        break;
                case 2:
                        int ele2 = s1.pop();
                        if(ele2 != -1){
                            System.out.println("The elemnet popped out from the stck is:"+ele2);
                        }
                        else{
                            System.out.println("Stack underflow!");
                        }
                        break;
                case 3:
                        s1.display();
                        break;
                case 4:
                        System.exit(0);
                        break;
                default:
                        System.out.println("Invalid choice!");
            }
        }
    }
}