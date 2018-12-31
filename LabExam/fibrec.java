import java.util.Scanner;
class fibrec{

    static int fib(int n){
        if(n == 0){
            return 0;
        }
        else if(n == 1){
            return 1;
        }
        else{
            return (fib(n-1)+fib(n-2));
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("-----------------------------------");
        System.out.print("Enter the number of terms you want:\t");
        n = sc.nextInt();

        int i=0;
        System.out.print("The fibonacci series is: \t");
        while(i<n){
            System.out.print(fib(i)+" ");
            i++;
        }
        System.out.println("\n-----------------------------------");
    }
}