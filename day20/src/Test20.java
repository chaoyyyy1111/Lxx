import java.util.Arrays;
import java.util.Scanner;

public class Test20 {
    public static void find(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            boolean flag = true;
            for (int j = 0; j < arr.length ; j++) {
                if (arr[i] == arr[j] && i != j) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                System.out.println(arr[i]);
            }
        }
    }

    public static void main1(String[] args) {
            int[] arr = {1,2,3,3,5,4,4,1,2};
            find(arr);
        }

        public static int fibonacci(int n) {
        int f1 = 1;
        int f2 = 1;
        int f3 = 1;
        for(int i = 3;i <= n;i++) {
                f3 = f1+f2;
                f1 = f2;
                f2 = f3;
        }
    return f3;

        }
        public static void main2(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        System.out.println(fibonacci(n));
        }

        public static int factor(int n) {
        int ret = 1;
        for(int i = 1;i <= n;i++) {
            ret*=i;
        }
        return ret;
        }
         public static void main3(String[] args) {
             Scanner scan = new Scanner(System.in);
             int n = scan.nextInt();
             System.out.println(factor(n));
         }
         public static void swap(int[] arr) {
             for(int i = 0;i < arr.length-1;i++) {
                 for(int j = i+1;j < arr.length-1;j++) {
                     if(arr[i]%2 == 0 && arr[j]%2 != 0) {
                         int tmp = arr[i];
                         arr[i] = arr[j];
                         arr[j] = tmp;
                         break;
                     }
                 }
             }
         }
         public static void main4(String[] args) {
              int[] arr = {1,2,3,4,5,6,7,8,9,10};
              swap(arr);
             System.out.println(Arrays.toString(arr));
         }

         public static int max3(int num1,int num2,int num3) {
             return max2(max2(num1,num2),num3);
         }
         public static int max2(int num1,int num2) {
             return num1 > num2 ? num1 : num2;
         }
         public static void main5(String[] args) {
             System.out.println(max2(2, 3));
             System.out.println(max3(2, 3, 4));
         }
         public static int max(int num1,int num2) {
             return num1 > num2 ? num1 : num2;
         }
         public static double max(double num1,double num2) {
             return num1 > num2 ? num1 : num2;
         }
         public static String max(double num1,double num2,int num3) {
                  if(max(max(num1,num2),num3) == num3) {
                      return String.valueOf(num3);
                  } else {
                      return String.valueOf(max(max(num1,num2),num3));
                  }
         }
         public static void main6(String[] args) {
             System.out.println(max(2, 3));
             System.out.println(max(2.1, 2.2));
             System.out.println(max(2.1, 2.3, 7));
         }
         public static int sum(int num1,int num2) {
             return num1+num2;
         }
         public static double sum(double num1,double num2,double num3) {
             return num1+num2+num3;
         }
         public static void main7(String[] args) {
           System.out.println(sum(2, 3));
           System.out.println(sum(2.1, 2.3, 7.2));
         }
        public static int jump(int n) {
        if(n <= 2) {
            return n;
        }else {
            return jump(n-1)+jump(n-2);
        }
        }
        public static void main8(String[] args) {
             Scanner scan = new Scanner(System.in);
             int n = scan.nextInt();
             System.out.println(jump(n));
        }
        public static int sumArrays(int[] arr) {
        int sum = 0;
        for(int i = 0;i < arr.length;i++) {
            sum+=arr[i];
        }
        return sum;
        }
        public static void main9(String[] args) {
        int[] arr = {1,2,3,4,5,6,7,8,9,10};
            System.out.println(sumArrays(arr));

        }
        public static void transform(int[] arr) {
            for (int i = 0; i < arr.length ; i++) {
                arr[i] = arr[i]*2;
            }
        }
        public static void main10(String[] args) {
        int[] arr = {1,2,3,4,5,6,7,8,9,10};
        transform(arr);
        System.out.println(Arrays.toString(arr));
        }
        public static String printArray(int[] arr) {
        String ret = "[";
            for (int i = 0; i < arr.length; i++) {
                ret+=arr[i];
                if(i < arr.length-1) {
                    ret+=", ";
                }
            }
            ret+="]";
        return ret;
    }
        public static void main11(String[] args) {
        int[] arr = {1,2,3,4,5,6,7,8,9,10};
            System.out.println(printArray(arr));
        }
        public static void main(String[] args) {
        int[] arr = new int[100];
            for (int i = 0; i < arr.length; i++) {
                arr[i] = i+1;
            }
    }
}


