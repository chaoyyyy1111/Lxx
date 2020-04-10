import java.util.Scanner;
public class Test18 {
	public static void main1(String[] args) {
	int num1 = 12;
	int num2 = 13;
	num1 = num1^num2;
	num2 = num1^num2;
	num1 = num1^num2;
    System.out.println("num1="+num1+" "+"num2="+num2);
}
public static int Max(int num1,int num2,int num3) {
	if(num1 < num2) {
		num1 = num2;
	}
	if(num1 < num3) {
		num1 = num3;
	}
return num1;
}
public static int Min(int num1,int num2,int num3) {
	if(num1 > num2) {
		num1 = num2;
	}
	if(num1 > num3) {
		num1 = num3;
	}
return num1;
}
public static void main2(String[] args) {
	Scanner scan = new Scanner(System.in);
	int num1 = scan.nextInt();
	int num2 = scan.nextInt();
	int num3 = scan.nextInt();
	System.out.println("最大值="+Max(num1,num2,num3));
    System.out.println("最小值="+Min(num1,num2,num3));
}
public static void main(String[] args) {
	   int sum = 0;
	   int ret = 1;
	   for(int i = 1;i <= 3;i++) {
			   ret*=i;
	           sum+=ret;
	   }
    System.out.println(sum);
}
}