/*
Write a Java Program that does the following related to Packages and Interfaces , Exception Handling:
a. Create an interface Student which gets the name and branch of a student.
b. Create a package called „StudentPackage‟ which has a user-defined class RegisterStudent.
c. If a student registers above 30 credits for the semester, the method should throw a user-defined
exception called „CreditLimit‟ and display an appropriate message.
d. Create another package called „ResultPackage‟ which displays the grade for the subjects registered
for particular semester and the SGPA . if SGPA is above 10 then throws an InvalidSGPA userdefined exception.
e. In the StudentPackage , collect the marks of all the subjectss in 4 semesters and calculate SGPA
and CGPA.
*/
package Q11.StudentPackage;
import java.util.Scanner;
import Q11.ResultPackage.Result;

interface Student{
    public void getName();
    public void getBranch();
}
class CreditLimit extends Exception{
    CreditLimit(String s){
        super(s);
    }
}
public class RegisterStudent extends Result implements Student{
    Scanner sc = new Scanner(System.in);
    public void getName(){
        System.out.println("Enter name:\t");
        name = sc.nextLine();
    }
    public void getBranch(){
        System.out.println("Enter branch:\t");
        branch = sc.nextLine();
    }
    public void register(int sem){
        semester = sem;
        if(semester == 1){
                getName();
                getBranch();
        }
        System.out.println("Enter the 6 subjectss registered");
        for(int i=0;i<6;i++){
            System.out.println("Enter subjects "+(i+1));
            subjects[i] = sc.next();
        }
        System.out.println("Enter the respective credits");
        totalCredits =0;
        for(int i=0;i<6;i++){
            System.out.println("Enter the credits of subjects "+(i+1));
            credit[i] = sc.nextInt();
            totalCredits += credit[i];
        }
        try{
            if(totalCredits >30){
                throw new CreditLimit("Credit Limit Exception");
            }
        }
        catch(CreditLimit cl){
            System.out.println(cl.getMessage());
        }
    }
}
