package Q10.ISE;
import java.util.Scanner;
import Q10.department;
import Q10.Faculty;
class MyException extends Exception{
    MyException(String s){
        super(s);
    }
}
public class ISE_department implements department{
    
    public void readData(Faculty f){
        Scanner sc = new Scanner(System.in);
         try{   
                System.out.println("Enter the name of the faculty");
                f.name = sc.nextLine();
                System.out.println("Enter the designation of the faculty");
                f.designation = sc.nextLine();
                System.out.println("Enter the Joining date of the faculty");
                f.joining_date = sc.nextLine();
                System.out.println("Enter the subjects handled by the faculty");
                f.subjects_handled = sc.nextLine();
                System.out.println("Enter the years of experience of the faculty");
                f.years_of_experience = sc.nextInt();
                System.out.println("Enter the no of designations the faculty had till date");
                f.no_of_designations = sc.nextInt();
                System.out.println("Enter the no of research consultancy projects done by the faculty");
                f.no_of_research_projects = sc.nextInt();
                System.out.println("Enter the age of the faculty");
                int tempAge = sc.nextInt();
                if(tempAge<=58){
                    f.age = tempAge;
                }
                else{
                    throw new MyException("------------------AgeException: Should be less than 58 years-------------");
                }
            }
        catch(MyException ex){
                
                int age1;
                do{
                    System.out.println(ex.getMessage());
                    System.out.println("Enter the age of the faculty again:");
                    age1 = sc.nextInt();
                }while(age1>58);
                f.age = age1;
        }
    }
   
    public void printData(Faculty f){
        System.out.println("The name of the faculty is "+f.name);
        System.out.println("The age of the faculty is "+f.age);
        System.out.println("The designation of the faculty is "+f.designation);
        System.out.println("The joining date of the faculty is "+f.joining_date);
        System.out.println("The subjects handled by the faculty are: "+f.subjects_handled);
        System.out.println("The years of experience the faculty has is "+f.years_of_experience);
        System.out.println("The number of designations faculty had are: "+f.no_of_designations);
        System.out.println("The number of research consultancy projects are: "+f.no_of_research_projects);
    }

    public void print_number_designations(Faculty f){
        System.out.println("The no of designations the faculty had are: "+f.no_of_designations);
    }

    public void number_research_consultancy_projects(Faculty f){
        System.out.println("The number of research consultancy projects the faculty did are: "+f.no_of_research_projects);
    }

}