-------------------------Folder 1-----------------------------
    
    This contains the java lab programs
    
 1. Write Java programs
    a. To print fibonacci series without using recursion and using recursion.(concept of loops, data
    types)
    b. To check prime numbers.
    c. To sort an array elements using bubble sort algorithm.
    
2.  Create a class called account with the data members(Accno – integer, name String, Phone_No: integer, 
    balance_amt:float), and following methods :
    a. getinput() to get input from the user
    b. Deposit() method which takes the amount to be deposited in to his/her account and do the
    calculation.
    c. Withdraw() method which gets the amount to be withdrawn from his/her account.
    d. Print the appropriate results.
    
3.  Define a Stack class to implement the stack data structure. Include constructors to perform initialization,
    method push to push an element into the stack, method pop to remove an element from the stack and
    display method to display the elements of the stack.
    
4.  Define a class Complex with data members as two real numbers, constructors for initialization these
    numbers, methods to add, subtract and multiply 2 complex numbers.
    
5.  Write a java program to read 2 matrices and place the product in a third matrix . Use constructors and
    suitable methods.
    
6.  Write a java program to work with strings.
    a.  Extract a portion of the string and print it. Variable m indicates the amount of characters to
        be extracted from the string starting from the nth position.
    b. Read a text and count all the occurrences of a particular word.
    c. Replace a substring in the given string.
    d. Rearrange the string and rewrite in alphabetical order.
    e. Compare two strings ignoring case.
    f. Concatenate two strings.

7.  Create a Personal class to hold the personal details of an person such as name, age, education, salary-
    (0basic, da, hra), years of experience, number of loans and loan amount. Write constructors to assign
    values to the data members. Include an
    a. isEligible() method to indicate whether the person is eligible for loan,
    b. taxPay() method to indicate the amount of tax to be paid,
    c. isEligiblePromotion() to indicate whether the person is eligible for a promotion.
    d. Display () method to display the details.
    Enter the details of n employees and indicate their eligibility and the tax to be paid.
    
8.  Create a Circle class with following members.
    A data member that stores the radius of a circle.
    A constructor function with an argument that initializes the radius
    A function that computes and returns area of a circle
    Create two derived classes Sector and Segment that inherit the Circle class. Both classes inherit radius and the
    function that returns the circle‟s area from Circle.    
    In addition to the members inherited from Circle, Sector and Segment have some specific members as follows:
    Sector
        1. A data member that stores the control angle of a sector (in radians)
        2. A constructor function with arguments that initialize radius and angle
        3. A function that computes and returns the area of a sector
    Segment
        1. A data member that stores the length of a segment in a circle
        2. A constructor function with arguments that initialize radius and length
        3. A function that computes and returns the area of a segment
    Create the main () function to instantiate an object of each class and then call appropriate member functions to
    compute and return the area of a circle, sector and segment. 
    Note :Area_of_circle = pi * r 2
    Area_of_Sector=(1/2) r 2 *θ
    Area_of_segment= r2*((r-h)/r) – (r-h) (2rh-h2)1/2 Where r is the radius of a circle, θ is the central angle of a
    sector in radians, h is the length of a segment and ((r-h)/r) is in radians.
    
9.  Write a Java Program that does the following related to Inheritance:
    a. Create an abstract class called Vehicle which contains the „year_of_manufacture‟ data member
    and two abstract methods „getData()‟ and „putData()‟ with a constructor.
    b. Create two derived classes “TwoWheeler” and “FourWheeler” and implement the abstract
    methods. Make “FourWheeler” as final class.
    c. Create class „MyTwoWheeler‟ which is a sub-class of “TwoWheeler” and demonstrate the use of
    super keyword to initialize data members of “MyTwoWheeler”.
    
10. Define an interface „Department‟ with methods to readdata() and printdata(),
    print_number_designations(), number_research_consultancy_projs(). Define a „Faculty‟ class with
    members name, designation, age, years of experience, joining_date and subjects_handled.
    a. In package ISE define the „ISE_department‟ class that implements the „Department‟ interface,
    accepts n faculty details and define all the methods. Raise a user defined exception
    „AgeException‟ if the age of the faculty is > 58.   
    b. In the default package define a „MainClass‟ which uses the methods of the above classes and also
    displays those faculty details whose years of experience is greater than or equal to 20.
    
11. Write a Java Program that does the following related to Packages and Interfaces , Exception Handling:
    a. Create an interface Student which gets the name and branch of a student.
    b. Create a package called „StudentPackage‟ which has a user-defined class RegisterStudent.
    c. If a student registers above 30 credits for the semester, the method should throw a user-defined
    exception called „CreditLimit‟ and display an appropriate message.
    d. Create another package called „ResultPackage‟ which displays the grade for the subject registered
    for particular semester and the SGPA . if SGPA is above 10 then throws an InvalidSGPA userdefined exception.
    e. In the StudentPackage , collect the marks of all the subjects in 4 semesters and calculate SGPA
    and CGPA. 

12. a. Write a java program to implement queues of Strings using an ArrayList class of the Collection
    framework.
    b. Create a linked list of names (String type). Use an Iterator to traverse through the list and print those
    names whose length is < 5.

