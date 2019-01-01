package Q10;
import java.util.Scanner;
import Q10.ISE.ISE_department;
import Q10.Faculty;

public class MainClass{
    
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int counter =0;
        int flag1 =0;
        int flag2 =0;
        int flag3 =0;
        int flag4 =0;
        
        ISE_department ise = new ISE_department();
        Faculty[] f = new Faculty[20];

        while(true){
            System.out.println("1. Add a faculty");
            System.out.println("2. Get the details of a particular faculty");
            System.out.println("3. Get the name of experienced faculty");
            System.out.println("4. Know the no of designations a particular faculty had");
            System.out.println("5. Know the no fo research consultancy proects done by a faculty");
            System.out.println("6. Exit!");

            System.out.println("Enter your choice:\t");
            int ch = sc.nextInt();

            switch(ch){
                case 1:
                        f[counter] = new Faculty();
                        ise.readData(f[counter]);
                        counter++;
                        break;
                case 2:
                        System.out.println("Enter the name of the faculty whose details you want");
                        sc.nextLine();
                        String x = sc.nextLine();

                        for(int i=0;i<counter;i++){
                            if(x.equals(f[i].name)){
                                flag1 = 1;
                                ise.printData(f[i]);
                                break;
                            }
                        }
                        if(flag1 == 0){
                            System.out.println("Faculty not found!");
                        }
                        break;
                case 3:
                        System.out.println("The faculty with experience greater than 20 years are:");
                        for(int i=0;i<counter;i++){
                            if(f[i].years_of_experience >=20){
                                System.out.println(f[i].name);
                                flag2 = 1;
                            }
                        }
                        if(flag2 == 0){
                            System.out.println("No Such record found");
                        }
                        break;
                case 4:
                        System.out.println("Enter the name of the faculty whose detail you want");
                        sc.nextLine();
                         x = sc.nextLine();

                        for(int i=0;i<counter;i++){
                            if(x.equals(f[i].name)){
                                flag3 = 1;
                                System.out.println("The no of designations the faculty had are: "+f[i].no_of_designations);
                                break;
                            }
                        }
                        if(flag3 == 0){
                            System.out.println("Faculty not found!");
                        }
                        break;
                case 5:
                        System.out.println("Enter the name of the faculty whose detail you want");
                        sc.nextLine(); 
                        x = sc.nextLine();

                        for(int i=0;i<counter;i++){
                            if(x.equals(f[i].name)){
                                flag4 = 1;
                                System.out.println("The no of reserach consultancy projects faculty did are: "+f[i].no_of_research_projects);
                                break;
                            }
                        }
                        if(flag4 == 0){
                            System.out.println("Faculty not found!");
                        }
                        break;
                case 6:
                        System.exit(0);
                        break;
                default:
                        System.out.println("Invalid choice!");
            }
        }

    }
}