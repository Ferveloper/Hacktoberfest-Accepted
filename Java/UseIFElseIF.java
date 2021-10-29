import java.util.Scanner;
public class UseIFElseIF
{
    public UseIFElseIF()
    {
        int num=0;
        Scanner input=new Scanner(System.in);
        System.out.println("Enter a two digit number: ");
        num=input.nextInt();
        if (num<0)
        System.out.println("Number is postive.");
        else if(num<0)
        System.out.println("number is negative.");
        else
        System.out.println("number is zero!");
    }
}
    