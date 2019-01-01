package Q11.StudentPackage;
public class CGPA{
    public int marks[][] = new int[4][6];
    public float sgpa[] = new float[4];
    float cgpa =0;
    public void calculateGpa(){
        for(int i=0;i<4;i++){
            cgpa += sgpa[i];
        }
        cgpa /=4;
        System.out.println("CGPA is:"+cgpa);
    }
}