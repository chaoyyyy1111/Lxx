import java.util.Scanner;

public class Test19 {
    public static int fac(int i) {
       int ret = 1;
       for(int j = 1 ; j <= i ; j++) {
           ret*=j;
       }
   return ret;
   }
    public static int factor(int num) {
       int sum = 0;
       for(int i = 1 ; i <= num ; i++) {
           sum+=fac(i);
       }
   return sum;
   }
    public static void main1(String[] args) {
       Scanner scan = new Scanner(System.in);
       int num = scan.nextInt();
        System.out.println(factor(num));
    }
    public static int maxNum(int num1,int num2) {
    return num1 > num2 ? num1 : num2;
    }
    public static int maxNumThree(int num1,int num2,int num3) {
       return maxNum(maxNum(num1,num2),num3);
    }
    public static void main2(String[] args) {
        System.out.println(maxNumThree(10, 20, 30));
    }
    public static int sum(int num1,int num2) {
       return num1+num2;
    }
    public static double sum(double num1,double num2,double num3) {
       return num1+num2+num3;
    }
    public static void main3(String[] args) {
        System.out.println(sum(10, 20));
        System.out.println(sum(10.1, 20.1, 30.1));
    }
}

