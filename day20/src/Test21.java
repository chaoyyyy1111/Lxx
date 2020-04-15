import java.util.Arrays;

public class Test21 {
    public static void main1(String[] args) {
        int[] array = {1,2,3,4,5,6};
        int[] array1 = new int[] {1,2,3};
        int[] array2 = new int[3];
        System.out.println(Arrays.toString(array));
        System.out.println(Arrays.toString(array1));
        System.out.println(Arrays.toString(array2));
    }

    public static void main2(String[] args) {
        int[] array = {1,2,4,5};
        for (int i = 0; i <array.length ; i++) {
            System.out.print(array[i]);
        }
        for (int x:array) {
            System.out.print(x+" ");
        }
    }
    public static void swap(int[] array) {
        int tmp = array[0];
        array[0] = array[1];
        array[1] = tmp;
    }
    public static void main3(String[] args) {
        int[] array = {1,2};
        System.out.println(Arrays.toString(array));
        swap(array);
        System.out.println(Arrays.toString(array));
        Arrays.sort(array);
        System.out.println(Arrays.toString(array));
    }

    public static void main4(String[] args) {
        int[] array = {1,2,3,4};
        System.out.println(array);
    }

    public static void main5(String[] args) {
        int[] array = {4,3,2,1};
        Arrays.sort(array,0,4);
        System.out.println(Arrays.toString(array));
    }

    public static int[] transform(int[] array) {
        int[] tmp = new int[array.length];
        for (int i = 0; i < array.length; i++) {
            tmp[i] = array[i]*2;
        }
        return tmp;
    }
    public static void main6(String[] args) {
        int[] array = {1,2,3,4};
        System.out.println(Arrays.toString(transform(array)));
    }
    public static void move(char start,char end) {
        System.out.println(start +"->"+ end);
    }
    public static void hanoi(int n,char a,char b,char c) {
        if(n == 1) {
            move(a,c);
        } else {
            hanoi(n-1,a,c,b);
            move(a,c);
            hanoi(n-1,b,a,c);
        }

    }
    public static void main7(String[] args) {
        int n = 3;
        hanoi(n,'A','B','C');
    }
    public static int find(int[] array) {
        int ret = 0;
        for (int i = 0; i <array.length ; i++) {
            ret^=array[i];
        }
        return ret;
    }
    public static void main8(String[] args) {
        int[] array = {1,1,2,2,3,3,4};
        System.out.println(find(array));
    }
}
