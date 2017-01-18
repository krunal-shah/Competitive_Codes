import java.util.*;
import java.math.BigInteger;

public class binary
{
	private static int calculate(String str)
	{
	    int counter = 0;
	    int i;
	    for(i=str.length()-1; i>=0; i--)
	    {
	        if(str.charAt(i)=='0')
	        {
	            counter++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    if(i>0)
	    {
	        //System.out.println(i);
	        String a = str.substring(0, i);

	        //cout << a << endl;
	        return calculate(a)+counter*calculate(a+"0");
	    }
	    else
	    {
	        return counter+1;
	    }
	}

	private static String binary(BigInteger num)
	{
	    String ans = "";
	    BigInteger two = new BigInteger("2");
	    int v;
	    while(!num.equals(BigInteger.ZERO))
	    {
	        //System.out.println(two);
	        v = num.mod(two).intValue();
	        
	        ans = Integer.toString(v) + ans;
	       	num = num.divide(two);
	       	//System.out.println(v+"  "+num.intValue());
	    }
	    //System.out.println("Returning "+num.intValue());
	    return ans;
	}

	public static void main(String args[])
	{
	    BigInteger a;
	    Scanner scan = new Scanner(System.in);
	    a = new BigInteger(scan.nextLine());
	    
	    String str = binary(a);
	    //System.out.println(str);
	    //cin >> str;
	    int ans = calculate(str);
	    System.out.println(ans);
	}
}
