import java.util.Arrays;

public class Test22 {
    public static int[] copyArray(int[] array) {
        int [] array1= new int[array.length];
        for (int i = 0; i <array.length ; i++) {
            array1[i] = array[i];
        }
        return array1;
    }
    public static void main1(String[] args) {
        int[] array = {1,2,3,4,5,6,7};
        System.out.println(Arrays.toString(copyArray(array)));
    }
    public static int maxArray(int[] array) {
        int max = array[0];
        for (int i = 1; i < array.length; i++) {
            if(max < array[i]) {
                max = array[i];
            }
        }
        return max;
    }
    public static void main2(String[] args) {
        int[] array = {9,8,3,4,5,6,7};
        System.out.println(maxArray(array));
    }
    public static int binarySearch(int[] array , int key) {
        Arrays.sort(array);
        int left = 0;
        int right = array.length-1;
        while(left <= right) {
            int mid = (left+right)/2;
            if(array[mid] == key) {
                return mid;
            } else if(array[mid] < key) {
                left = mid + 1;
            } else {
                right = mid -1;
            }
        }
        return -1;
    }
    public static void main3(String[] args) {
        int[] array = {1,2,3,4,5,6,7};
        System.out.println(binarySearch(array, 8));
    }

    public static boolean isUp(int[] array) {
        for (int i = 0; i < array.length-1; i++) {
            if(array[i] > array[i+1]) {
                return false;
            }
        }
        return true;
    }
    public static void main4(String[] args) {
        int[] array = {1,20,3,4,10,6,7};
        System.out.println(isUp(array));
    }
    public static void bubbleSort(int[] array) {
        for (int i = 0; i < array.length-1; i++) {
           boolean flag = true;
            for (int j = 0; j < array.length-1-i; j++) {
                if(array[j] > array[j+1]) {
                    int tmp = array[j];
                    array[j] = array[j+1];
                    array[j+1] = tmp;
                    flag = false;
                }
            }
         if(flag) {
             break;
         }
        }
    }
    public static void main5(String[] args) {
        int[] array = {1,20,3,4,10,6,7};
        bubbleSort(array);
        System.out.println(Arrays.toString(array));
    }
}
