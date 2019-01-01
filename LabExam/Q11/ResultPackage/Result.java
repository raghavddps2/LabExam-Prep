package Q11.ResultPackage;
import java.util.Scanner;
import Q11.StudentPackage.CGPA;

class InvalidSGPA extends Exception{
    InvalidSGPA(String s){
        super(s);
    }
}
public class Result extends CGPA{

    public char grade[][] = new char[4][6];
    public int credit[] = new int[6];
    public String name ="";
    public String branch = "";
    public int semester;
    public String subjects[] = new String[6];
    public int totalCredits =0;
    Scanner sc = new Scanner(System.in);
    public void result(){
        for(int i=0;i<6;i++){
            System.out.println("Enter the marks in Subject["+(i+1)+"]");
            marks[semester-1][i] = sc.nextInt();
        }

        for(int i=0;i<6;i++){
            if(marks[semester-1][i]>90){
                grade[semester-1][i] = 'O';
                sgpa[semester-1] += credit[i]*10;
            }
            
            else if(marks[semester-1][i]>80){
                grade[semester-1][i] = 'S';
                sgpa[semester-1] += credit[i]*9;
            }
            
            else if(marks[semester-1][i]>70){
                grade[semester-1][i] = 'A';
                sgpa[semester-1] += credit[i]*8;
            }
            
            else if(marks[semester-1][i]>60){
                grade[semester-1][i] = 'B';
                sgpa[semester-1] += credit[i]*7;
            }
            
            else if(marks[semester-1][i]>50){
                grade[semester-1][i] = 'C';
                sgpa[semester-1] += credit[i]*6;
            }
            
            else if(marks[semester-1][i]>40){
                grade[semester-1][i] = 'D';
                sgpa[semester-1] += credit[i]*5;
            }
            else{
                grade[semester-1][i] = 'F';
                sgpa[semester-1] += credit[i]*5;
            }
        }
        sgpa[semester-1] /= totalCredits;
        
        try{
            if(sgpa[semester-1]>10){
                throw new InvalidSGPA("Invalid SGPA Exception");
            }
            else{
                System.out.println("SGPA in semester"+semester+" = "+sgpa[semester-1]);
            }
        }
        catch(InvalidSGPA ex){
            System.out.println(ex.getMessage());
        } 
    }
}