import com.sun.xml.internal.ws.api.model.wsdl.WSDLOutput;

import java.util.Scanner;

public class HomeWork {
    public static int fac(int num) {
        if(num == 1 ) {
            return num;
    }
    return num*fac(num-1);
    }
    public static void main1(String[] args) {
        Scanner scan =new Scanner(System.in);
        int num = scan.nextInt();
        System.out.println(fac(num));
    }
    public static int sum(int num) {
    if(num == 1) {
        return num;
    }
    return num+sum(num-1);
    }
    public static void main2(String[] args) {
        int num = 10;
        System.out.println(sum(num));
    }
    public static void orderPrint(int num) {
        if(num > 9) {
            orderPrint(num/10);
        }
        System.out.println(num%10);
    }
    public static void main3(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        orderPrint(num);
    }
    public static int sumNumber(int num) {
        if(num <10) {
            return (num%10);
        }
    return num%10+sumNumber(num/10);
    }
    public static void main4(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        System.out.println(sumNumber(num));
    }
    public static int fibonacci1(int num) {
        if(num <= 2) {
            return 1;
        }
        return fibonacci1(num-1)+fibonacci1(num-2);
    }
    public static int fibonacci2(int num) {
        int f1 = 1;
        int f2 = 1;
        int f3 = 1;
        for(int i = 3 ;i <= num ;i++) {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
        }
    return f3;
    }
    public static void main5(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();
        System.out.println(fibonacci1(num));
        System.out.println(fibonacci2(num));
    }
    public static void hanoi(int n,char a,char b,char c) {
        if(n > 1) {
            hanoi(n -1 ,a,c,b);
            System.out.println(a +"to"+ c);
            hanoi(n -1 ,b,a,c);
        }else {
            System.out.println(a +"to"+ c);
        }
    }
    public static void main6(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        char a = 'A';//起始柱
        char b = 'B';//中间柱
        char c = 'C';//目标柱
        hanoi(n,a,b,c);
    }
    public static int jump(int n) {
        if (n <= 2) {
            return n;
        }
    return jump(n-1)+jump(n-2);
    }
    public static void main7(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        System.out.println(jump(n));

    }
}
