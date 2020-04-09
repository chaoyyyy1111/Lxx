public class Test16 {
	public static void main1(String[] args) {
		//long 8个字节
		long a=Long.MAX_VALUE;
		long min=Long.MAX_VALUE+1;
		long max=-9223372036854775808L-1;
		System.out.println("a的值="+a);
		System.out.println("long的最小值="+min);
		System.out.println("long的最大值="+max);
		
	}
    public static void main2(String[]args) {
		for(int i=0;i<args.length;i++)
		{
			System.out.println(args[i]);
		}
	    System.out.println("hehe");
	}
    public static void main3(String[]args) {
		//double 8个字节
		double a=1.0;
		double b=2.0;
		double max=Double.MAX_VALUE;
		double min=Double.MIN_VALUE;
		System.out.println(a+" "+b+" "+max+" "+min);
		int num1=1;
		double num2=2.0;
		double num3=num1/num2;
	    System.out.println(num3);
	}
    public static void main4(String[]args) {
		//float 4个字节
		float a=1.21f;
		System.out.println(a);
	}
    public static void main5(String[]args) {
		//char 2个字节
		//包装类Character
		char a='A';
		char b='林';
		char c=98;
		System.out.println(a+""+b+""+c);
	}
    public static void main6(String[]args) {
		//byte 1个字节
		byte a=127;
		byte b=1;
		byte c=(byte)(a+b);
		byte d=(byte)128;
		System.out.println(c);
		System.out.println(d);
		System.out.println(Byte.MAX_VALUE+1);
	}
     public static void main7(String[]args) {
		//short 2个字节
		short a=(short)(Short.MAX_VALUE+1);
		System.out.println(Short.MAX_VALUE);
		System.out.println(Short.MIN_VALUE);
		System.out.println(Short.MAX_VALUE+1);
	    System.out.println(a);
	}
	public static void main8(String[]args) {
		boolean flag=true;
		if(!flag) {
			System.out.println("hehe");
		}else{
			System.out.println("haha");
		}
    } 
    public static void main9(String[]args) {
		/* byte a=10;
		byte b=20;
		byte c=(byte)(a + b);
		System.out.println(c); */
	    String str="\"\\hello\\\"";
	    System.out.println(str);
	}
    public static void main10(String[]args) {
		final byte BYTE_MIN_VALUE=(byte)128;
	    System.out.println(BYTE_MIN_VALUE);
	}
    public static void main11(String[]args) {
		/* long a=10L;
		int b=(int)a;
		System.out.println(b);
		String num=a+"";
		String num1=String.valueOf(a);
		System.out.println(num+num1); */
	    String str="100";
		System.out.println(str);
		int num=Integer.parseInt(str);
		System.out.println(num);
	}

}

