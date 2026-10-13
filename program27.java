import java.util.Scanner;

class program27
{
    public static void main(String A[]) 
    {
        int iAge = 0;
        float fMarks = 0.0;            //Error
        Scanner scanner = null;
        String sName = null;

        scanner = new Scanner(System.in);

        System.out.println("Enter Your Name :");
        sName = scanner.nextLine();

        System.out.println(("Enter Your Marks :"));
        fMarks = scanner.nextFloat();

        System.out.println("Welcome :"+sName);
        System.out.println(("Your Age is :"+iAge));
        System.out.println("Your Marks is :"+fMarks);

    }
}


