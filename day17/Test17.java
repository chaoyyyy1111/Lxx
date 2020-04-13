import java.util.Scanner;
import java.lang.Math;
public class Test17{
	public static void main1(String[] args) {
	Scanner scan = new Scanner(System.in);
	while(scan.hasNextInt()) {
	int age = scan.nextInt();
    if(age <= 18) {
		System.out.println("少年");
	} else if(age >= 19 && age <= 28) {
		System.out.println("青年");
	} else if(age >= 29 && age <= 55) {
		System.out.println("中年");
	} else {
		System.out.println("老年");
	}
	}
	}
    public static void main2(String[] args) {
		Scanner scan = new Scanner(System.in);
		while(scan.hasNextInt()) {
		int num = scan.nextInt();
			int i = 0;
			for( i = 2;i <= Math.sqrt(num);i++) {
				if(num%i == 0) {
					break;
				}
			}
		if(i > Math.sqrt(num)) {
			System.out.println("是素数");
		} else {
			System.out.println("不是素数");
		}
		}
	}
    public static void main3(String[] args) {
       for( int num = 2; num <= 100;num++) {
		   int i = 0;
		   for( i = 2;i <= Math.sqrt(num);i++) {
			   if(num%i == 0) {
					break;
				}
		   }
	   if(i > Math.sqrt(num)) {
			System.out.print(num+" ");
		} 
	   }	   
    }
    public static void main4(String[] args) {
		int year = 0;
		for(year = 1000;year <= 2000;year++) {
			if((year%4 == 0 && year%100 != 0)||(year%400 == 0)) {
				System.out.println(year);
			}
		}
	}
	public static void main5(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		for(int i = 1;i <= n;i++) {
			for(int j = 1;j <= i;j++) {
				System.out.printf("%d*%d=%-2d ",i,j,i*j);
			}
		    System.out.println();
		}
	}
	public static void main6(String[] args) {
		Scanner scan = new Scanner(System.in);
		while(scan.hasNextInt()) {
		int num1 = scan.nextInt();
		int num2 = scan.nextInt();
	    int ret = num2;
		while(num1%num2 != 0) {
		ret = num1%num2;
		num1=num2;
		num2=ret;
		}
	    System.out.println("最大公约数="+ret);
		}
	}
    public static void main7(String[] args) {
	    double ret = 0.0;
		int flag = 1;
		for(int i = 1;i <= 100;i++) {
			ret+=1.0/i*flag;
		    flag = -flag;
		}
    System.out.println(ret);
	}
    public static void main8(String[] args) {
		int i = 0;
		int count = 0;
		for(i = 1;i <= 100;i++) {
			if(i%10 == 9) {
			    count++;
			}
		    if(i/10 == 9) {
				count++;
			}
		}
	    System.out.println(count);
	}
    public static void main9(String[] args) {
		for(int num = 0;num <= 999;num++) {
			int tmp = num;
			int count =0;
			while(tmp != 0) {
				tmp/=10;
			    count++;
			}
			if(num == 0) {
				count = 1;
			}
			tmp = num;
			int sum = 0;
			while(tmp != 0) {
				sum+=Math.pow((tmp%10),count);
				tmp/=10;
			}
		    if(num == sum) {
			System.out.print(num+" ");
			}
		}
	}
    public static void main10(String[] args) {
		String  passWord = "0123 456";
		int count = 3;
		Scanner scan = new Scanner(System.in);
		System.out.println("请输入密码");
		while(count != 0) {
		String input = scan.nextLine();
		if(passWord.equals(input)) {
			System.out.println("登录成功");
		    break;
		} else {
			count--;
			if(count == 0) {
			System.out.println("3次机会已到，程序退出");
			} else {
			System.out.println("密码错误，请重新输入，还有"+count+"次机会");
			}
		}
		}
	}
	public static void main11(String[] args) {
		Scanner scan = new Scanner(System.in);
		int num = scan.nextInt();
		int count = 0;
		while(num != 0) {
			num=num&(num-1);
			count++;
		}
	System.out.println(count);
	}
    public static void main12(String[] args) {
		Scanner scan = new Scanner(System.in);
		int num = scan.nextInt();
		int i = 0;
		for(i = 30;i >= 0;i-=2) {
			System.out.print(((num>>i)&1)+" ");
		}
	    System.out.println();
		for(i = 31;i >= 1;i-=2) {
			System.out.print(((num>>i)&1)+" ");
		}
	}
   public static void Input(int num) {
	   if(num > 9) {
		   Input(num/10);
	   }
       System.out.print((num%10)+" ");
   }
   public static void main13(String[] args) {
		Scanner scan = new Scanner(System.in);
		int num = scan.nextInt();
		Input(num);
	}
}