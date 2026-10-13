import java.util.Scanner;

class program28
{
    public static void main(String A[]) 
    {
        int iAge = 0;
        float fMarks = 0.0f;     
        String sName = null ;
        Scanner scanner = null;

        scanner = new Scanner(System.in);

        System.out.println("Enter Your Name :");
        sName = scanner.next();                        //Exception

        System.out.println("Enter Your age");
        iAge = scanner.nextInt();

        System.out.println("Enter Your Marks :");
        fMarks = scanner.nextFloat();
        
        System.out.println("Welcome :"+sName);
        System.out.println(("Yoyr Age is :"+iAge));
        System.out.println("Your Marks is :"+fMarks);

    }
}