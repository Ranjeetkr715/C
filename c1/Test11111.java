import java.util.*;
class Test 
{
	public static void main(String[] args)
	{
		try
		{
			Scanner s= new Scanner(System.in);
			System.out.println("enter a number");
			int num=s.nextInt();
			System.out.println(10/0);
			System.out.println("ratan".charAt(12));
		}
		catch(ArithmeticException e)
		{
			System.out.println(10/2);
		}
		catch(StringIndexOutOfBoundsException e)
		{
		System.out.println("durgasoft");
		}
		System.out.println("rest of the code");
	}
}